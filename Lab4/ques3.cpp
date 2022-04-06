#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cout << "Enter the number of rows : ";
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k <= n - i + 1; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*"
                 << " ";
        }

        cout << endl;
    }

    return 0;
}