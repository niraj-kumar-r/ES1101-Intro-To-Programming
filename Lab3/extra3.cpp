#include <iostream>

using namespace std;

int main(void)
{
    int n = 1;

    cout << "Enter a number : ";
    cin >> n;

    int sum = 0, term = 0;

    for (int i = 1; i <= n; i++)
    {
        term += i;
        sum += term;
    }

    cout << sum;

    return 0;
}