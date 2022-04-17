// given an array A of distinct integers, write a program to find a
// triplet (a group of 3 elements) that has a minimum sum

#include <iostream>

using namespace std;

int main(void)
{
    int n = 3;
    // defaukt length of array A

    int elemets_to_sum = 3;

    while (true)
    {
        cout << "Enter the number of elements in the array: ";
        cin >> n;

        if (n >= elemets_to_sum)
        {
            break;
        }

        else
        {
            cout << "INVALID INPUT. The number of elements must be more than or equal to " << elemets_to_sum << ". Try again\n";
        }
    }

    int A[n] = {};

    cout << "Enter the elements (space seperated in a single line)\n";

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int min_sum_array[elemets_to_sum] = {};

    for (int i = 0; i < elemets_to_sum; i++)
    {
        int min_element = A[i];
        int min_index = i;

        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < min_element)
            {
                min_element = A[j];
                min_index = j;
            }
        }

        A[min_index] = A[i];
        A[i] = min_element;
        min_sum_array[i] = min_element;
    }

    cout << "The triplet with min sum is: ";

    for (int k = 0; k < elemets_to_sum; k++)
    {
        cout << min_sum_array[k] << " ";
    }
    cout << "\n";
}