#include <iostream>

using namespace std;

int main(void)
{
    int n, k;
    cout << "Enter the number : ";
    cin >> n;
    cout << "Enter the number of digits to be reversed : ";
    cin >> k;

    int d = 0, num = n, rev_num = 0, num_length = 0;
    while (num != 0)
    {
        d = num % 10;
        num_length++;
        if (num_length <= k)
        {
            rev_num = (rev_num * 10) + d;
        }

        num = num / 10;
    }

    if (num_length < k)
    {
        cout << "Invalid input given, k must be less than or equal to the number of digits in n";
    }
    else
    {
        cout << rev_num;
    }

    return 0;
}