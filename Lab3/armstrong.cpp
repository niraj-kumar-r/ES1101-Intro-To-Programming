#include <iostream>

using namespace std;

int main(void)
{
    int n = 1;

    cout << "Enter a Number : ";
    cin >> n;

    int sum = 0, d = 0, num = n;

    while (num != 0)
    {
        d = num % 10;
        sum += d * d * d;
        num = num / 10;
    }

    if (sum == n)
    {
        cout << n << " is an armstrong Number" << endl;
    }
    else
    {
        cout << n << " is not an armstrong number" << endl;
    }

    return 0;
}
