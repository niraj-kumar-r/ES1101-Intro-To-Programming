#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void mergeSort(char S[][101], int low, int high);
int compStringRecursive(char x[], char y[], int i = 0);
void mergeArray(char S[][101], int low, int mid, int high);
void copyString(char to[], char from[]);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n = 1;
        cin >> n;
        char wordArr[n][101];
        for (int i = 0; i < n; i++)
        {
            cin >> wordArr[i];
        }

        mergeSort(wordArr, 0, n - 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; wordArr[i][j] != '\0'; j++)
            {
                cout << wordArr[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}

void mergeSort(char S[][101], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (high + low) / 2;
    mergeSort(S, low, mid);
    mergeSort(S, mid + 1, high);

    mergeArray(S, low, mid, high);
}

int compStringRecursive(char x[], char y[], int i)
{
    if (x[i] < y[i])
    {
        return -1;
    }
    else if (x[i] > y[i])
    {
        return 1;
    }
    else if (x[i] == '\0' && y[i] == '\0')
    {
        return 0;
    }
    else
    {
        return compStringRecursive(x, y, i + 1);
    }
}

void mergeArray(char S[][101], int low, int mid, int high)
{
    int smallArrLeftLen = mid - low + 1;
    int smallArrRightLen = high - mid;

    char smallArrLeft[smallArrLeftLen][101], smallArrRight[smallArrRightLen][101];

    for (int i = 0; i < smallArrLeftLen; i++)
    {
        copyString(smallArrLeft[i], S[low + i]);
    }
    for (int i = 0; i < smallArrRightLen; i++)
    {
        copyString(smallArrRight[i], S[mid + 1 + i]);
    }

    int indexLeft = 0, indexRight = 0, indexS = low;

    while (indexLeft < smallArrLeftLen && indexRight < smallArrRightLen)
    {
        int comp = compStringRecursive(smallArrLeft[indexLeft], smallArrRight[indexRight]);
        if (comp <= 0)
        {
            copyString(S[indexS], smallArrLeft[indexLeft]);
            indexLeft++;
        }
        else
        {
            copyString(S[indexS], smallArrRight[indexRight]);
            indexRight++;
        }
        indexS++;
    }

    while (indexLeft < smallArrLeftLen)
    {
        copyString(S[indexS], smallArrLeft[indexLeft]);
        indexLeft++;
        indexS++;
    }

    while (indexRight < smallArrRightLen)
    {
        copyString(S[indexS], smallArrRight[indexRight]);
        indexRight++;
        indexS++;
    }
}

void copyString(char to[], char from[])
{
    int i;
    for (i = 0; from[i] != '\0'; i++)
    {
        to[i] = from[i];
    }
    to[i] = '\0';
}