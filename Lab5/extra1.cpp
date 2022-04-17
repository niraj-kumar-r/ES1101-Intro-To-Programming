// given an array A of distinct integers, write a program to find a
// triplet (a group of 3 elements) that has a minimum sum

#include <iostream>

using namespace std;

int main(void)
{
    int n = 3;
    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n >= 3)
        {
            break;
        }

        else
        {
            cout << "INVALID INPUT. The number of elements must be more than or equal to 3. Try again\n";
        }
    }

    cout << n;
}