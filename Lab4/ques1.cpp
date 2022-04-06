#include <iostream>

using namespace std;

void printDistribution(int n);

int main(void)
{
    int things;
    cout << "Enter the number of chocolates : ";
    cin >> things;

    printDistribution(things);

    return 0;
}

void printDistribution(int n)
{
    int people = 3;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << n - i - j << " " << j << " " << i << endl;
        }
    }
}
