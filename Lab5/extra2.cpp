// given an array of n positive numbers cantaining duplicates, write a program
// to find the majority number if it exists.
// A number in an array of n numbers is referred to as a majority number if it
// appears for atleast [n/2] times

#include <iostream>

using namespace std;

void selection_sort_ascending(int *array, int start_at_index, unsigned int number_of_elements_to_sort);

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

    selection_sort_ascending(A, 0, n);

    int current_element = A[0];
    int current_freq = 0;

    int majority_element = 0;
    bool majority_element_found_flag = false;

    for (int i = 0; i < n; i++)
    {
        if (A[i] == current_element)
        {
            current_freq++;
        }
        else
        {
            if ((n % 2 == 0 && current_freq >= n / 2) || (n % 2 == 1 && current_freq > n / 2))
            {
                majority_element_found_flag = true;
                majority_element = current_element;

                break;
            }

            current_element = A[i];
            current_freq = 1;
        }
    }

    if (majority_element_found_flag)
    {
        cout << "Majority element is " << majority_element << "\n";
    }

    else
    {
        cout << "Majority element does not exist"
             << "\n";
    }
}

void selection_sort_ascending(int *array, int start_at_index, unsigned int number_of_elements_to_sort)
{
    int minElement = array[start_at_index], minIndex = start_at_index;

    for (int i = start_at_index; i <= number_of_elements_to_sort - 2; i++)
    {
        minElement = array[i];
        minIndex = i;

        for (int j = i + 1; j <= number_of_elements_to_sort - 1; j++)
        {
            if (array[j] < minElement)
            {
                minElement = array[j];
                minIndex = j;
            }
        }

        array[minIndex] = array[i];
        array[i] = minElement;
    }
}
