#include <iostream>

using namespace std;

int main(void)
{
    int a, n, d;
    cout << "Input the starting number of the A.P. series : ";
    cin >> a;
    cout << "Input the number of items for the A.P. series : ";
    cin >> n;
    cout << "Input the common difference of A.P. series : ";
    cin >> d;

    int sum = 0, term = 0;

    cout << "The Sum of the A.P. series is : " << endl;

    for (int r = 0; r < n; r++)
    {
        term = a + (r * d);
        if (r == n - 1)
        {
            cout << term << " = ";
        }
        else
        {
            cout << term << " + ";
        }

        sum += term;
    }

    cout << sum;

    return 0;
}