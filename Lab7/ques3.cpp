#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int minElement(int A[], int low, int high);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        int size = 1;
        cin >> size;
        int arr[size] = {0};

        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        cout << minElement(arr, 0, size - 1) << '\n';
    }
    return 0;
}

int minElement(int A[], int low, int high)
{
    if (low == high)
    {
        return A[low];
    }
    else
    {
        return min(minElement(A, low, high - 1), A[high]);
    }
}
