#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isSorted(int A[], int low, int high);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n = 1;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (isSorted(arr, 0, n - 1))
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }
    return 0;
}

bool isSorted(int A[], int low, int high)
{
    if (low == high)
    {
        return true;
    }

    else
    {
        if (isSorted(A, low, high - 1) == 1 && A[high - 1] <= A[high])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}