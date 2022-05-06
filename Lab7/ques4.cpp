#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int num, int div = 2);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (isPrime(arr[i]))
            {
                count++;
            }
        }

        cout << count << '\n';
    }
    return 0;
}

bool isPrime(int num, int div)
{
    if (num <= 2)
    {
        if (num == 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    else if (num % div == 0)
    {
        return false;
    }

    else if (div > sqrt(num))
    {
        return true;
    }

    else
    {
        return isPrime(num, div + 1);
    }
}