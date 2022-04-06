#include <iostream>

using namespace std;

void printTriangle(int rows);

int binomialCoefficient(int n, int k);

int main(void)
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    printTriangle(n);

    return 0;
}

void printTriangle(int rows)
{

    for (int i = 0; i < rows; i++)
    {
        for (int s = rows - i - 1; s >= 0; s--)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << binomialCoefficient(i, j) << " ";
        }
        cout << endl;
    }
}

int binomialCoefficient(int n, int k)
{
    int coeff = 1;
    if (k > n - k)
    {
        k = n - k;
    }

    for (int r = 0; r < k; r++)
    {
        coeff = (coeff * (n - r)) / (r + 1);
    }

    return coeff;
}