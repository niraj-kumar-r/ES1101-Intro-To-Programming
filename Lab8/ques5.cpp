#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void convert(char S[][101], int n);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char wordArr[n][101];

        for (int i = 0; i < n; i++)
        {
            cin >> wordArr[i];
        }

        convert(wordArr, n);

        for (int j = 0; j < n; j++)
        {
            for (int k = 0; wordArr[j][k] != '\0'; k++)
            {
                cout << wordArr[j][k];
            }
            cout << '\n';
        }
    }
    return 0;
}

void convert(char S[][101], int n)
{
    for (int i = 0; i < n; i++)
    {
        char a = S[i][0];

        if (a >= 'a' && a <= 'z')
        {
            S[i][0] -= 32;
        }

        else if (a >= 'A' && a <= 'Z')
        {
            S[i][0] += 32;
        }
    }
}