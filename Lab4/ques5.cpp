#include <iostream>

using namespace std;

int ncr(int n, int r);
int factorial(int n);

int main(void)
{
    int n, r;
    cout << "Enter the vlaue of n : ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    cout << ncr(n, r);
    return 0;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }

    return fac;
}