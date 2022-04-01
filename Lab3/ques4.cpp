#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    int number = 1;
    cout << "Enter a Number : ";
    cin >> number;

    int sum = 0;

    for (int i = 0; i < number; i++)
    {
        int exp = 0, term = 0;

        for (int j = 0; j <= i; j++)
        {
            term += pow(10, exp);
            exp++;
        }
        sum += term;
    }
    cout << "The sum of first " << number << " terms of the series is " << sum;

    return 0;
}
