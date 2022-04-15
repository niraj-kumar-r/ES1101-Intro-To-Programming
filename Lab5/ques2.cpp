// Given an array A of n integers, write a program to find the number of valid pairs in A.
// A pair (A[i], A[j]) is said to be a valid pair, if i < j and A[i] < A[j].
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    int outputArray[t], outputArrrayLength = t;
    while (t--)
    {
        int n;
        cin >> n;

        int num_of_pairs = 0;

        int numArray[n];

        for (int i = 0; i < n; i++)
        {
            cin >> numArray[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (numArray[i] < numArray[j])
                {
                    num_of_pairs++;
                }
            }
        }

        outputArray[outputArrrayLength - t - 1] = num_of_pairs;
    }

    for (int k = 0; k < outputArrrayLength; k++)
    {
        cout << outputArray[k] << "\n";
    }
    return 0;
}