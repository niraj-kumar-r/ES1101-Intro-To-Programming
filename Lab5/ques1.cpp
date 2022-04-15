// Write a program to find the mean, median and mode of an array A of n integers.
// For a given data, the mode need not be unique.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

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
    sort(newArray, newArray + n);

    if (n % 2 == 1)
    {
        return (float)array[((n + 1) / 2) - 1];
    }
    else
    {
        return (float)(array[(n / 2) - 1] + array[((n / 2) + 1)] - 1) / 2.0;
    }
}
