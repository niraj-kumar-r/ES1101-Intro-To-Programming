#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findLength(char A[], int i = 0);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;

    while (t--)
    {
        char arr[101];
        cin >> arr;
        cout << findLength(arr) << '\n';
    }
    return 0;
}

int findLength(char A[], int i)
{
    if (A[i] == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + findLength(A, i + 1);
    }
}
