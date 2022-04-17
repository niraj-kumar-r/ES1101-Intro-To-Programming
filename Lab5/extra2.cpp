// given an array of n positive numbers cantaining duplicates, write a program
// to find the majority number if it exists.
// A number in an array of n numbers is referred to as a majority number if it
// appears for atleast [n/2] times

#include <iostream>

using namespace std;

int main(void)
{
    int n = 3;
    // default length of array A

    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n >= 1)
        {
            break;
        }

        else
        {
            cout << "INVALID INPUT. The number of elements must be more than or equal to 1. Try again\n";
        }
    }

    int A[n] = {};

    cout << "Enter the elements (space seperated in a single line)\n";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}