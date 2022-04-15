// Given an array A of n integers, write a program to move all zeros in A to the end of the array.
// The relative order of the non-zero elements in the array should not be disturbed.
// For the input A ={21,0,4,0,55,0,6}, the output is {21,4,55,6,0,0,0}

#include <iostream>

using namespace std;

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

    int anotherArray[n] = {};
    int current_index = 0;

    for (int i = 0; i < n; i++)
    {
        if (numArray[i] != 0)
        {
            anotherArray[current_index] = numArray[i];
            current_index++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << anotherArray[i] << " ";
    }
    cout << "\n";
}