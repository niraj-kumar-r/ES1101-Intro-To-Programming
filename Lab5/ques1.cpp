// Write a program to find the mean, median and mode of an array A of n integers.
// For a given data, the mode need not be unique.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selection_sort_ascending(int *array, int start_at_index, unsigned int number_of_elements_to_sort);
float get_mean(int *array, unsigned int n);
float get_median(int *array, unsigned int n);

int main(void)
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int numArray[n];

    cout << "Enter the elements (space seperated in a single line)\n";

    for (int i = 0; i < n; i++)
    {
        cin >> numArray[i];
    }

    float median = get_median(numArray, n);
    float mean = get_mean(numArray, n);

    cout << median << " is median and mean is " << mean << "\n";
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

float get_mean(int *array, unsigned int n)
{
    int sum_of_elements = 0;

    for (int i = 0; i < n; i++)
    {
        sum_of_elements += array[i];
    }

    return (float)sum_of_elements / (float)n;
}

float get_median(int *array, unsigned int n)
{
    int newArray[n];
    copy(array, array + n, newArray);
    selection_sort_ascending(newArray, 0, n);

    if (n % 2 == 1)
    {
        return (float)newArray[((n + 1) / 2) - 1];
    }
    else
    {
        return (float)(newArray[(n / 2) - 1] + newArray[((n / 2) + 1)] - 1) / 2.0;
    }
}
