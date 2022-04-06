#include <iostream>

using namespace std;

int convertToDigit(int n);
int sumOfDigits(int n);

int main(void)
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << convertToDigit(n);
    return 0;
}

int convertToDigit(int n)
{
    int sum = sumOfDigits(n);

    if (sum > 9)
    {
        return convertToDigit(sum);
    }
    else
    {
        return sum;
    }
}

int sumOfDigits(int n)
{
    int sum = 0;
    int d = 0;

    while (n != 0)
    {
        d = n % 10;
        sum += d;
        n /= 10;
    }

    return sum;
}