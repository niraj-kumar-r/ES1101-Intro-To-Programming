#include <iostream>
#include <math.h>

using namespace std;

int numberOfTrailingZeroesInFactorial(int num);

int main(void)
{
    int number;
    cout << "Enter a Number : ";
    cin >> number;
    cout << "The number of trailing zeores in factorial are " << numberOfTrailingZeroesInFactorial(number);
    return 0;
}

int numberOfTrailingZeroesInFactorial(int num)
{
    int trailingZeroes = 0;
    int powerOfFive = 1;
    while (true)
    {
        int term = num / pow(5, powerOfFive);
        if (term == 0)
        {
            break;
        }
        else
        {
            trailingZeroes += term;
            powerOfFive += 1;
        }
    }
    return trailingZeroes;
}