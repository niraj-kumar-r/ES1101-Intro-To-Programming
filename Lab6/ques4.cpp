#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        char num1[101], num2[101];
        cin >> num1;
        cin >> num2;

        int length1 = 0, length2 = 0;
        for (; num1[length1] != '\0'; length1++)
        {
        }
        for (; num2[length2] != '\0'; length2++)
        {
        }

        int max_length = length1, min_length = length2;

        if (length1 < length2)
        {
            max_length = length2;
            min_length = length1;
        }

        char big_sum[102];
        int big_sum_length = 0;

        int carry = 0;

        for (int i = 0; i < max_length; i++)
        {
            int a, b;
            if (i < min_length)
            {
                a = int(num1[length1 - i - 1]) - 48;
                b = int(num2[length2 - i - 1]) - 48;
            }
            else
            {
                if (i >= length2)
                {
                    a = int(num1[length1 - i - 1]) - 48;
                    b = 0;
                }
                else
                {
                    a = 0;
                    b = int(num2[length2 - i - 1]) - 48;
                }
            }

            int s = a + b + carry;

            if (!s / 10)
            {
                big_sum[i] = char(s + 48);
                carry = 0;
                big_sum_length++;
            }
            else
            {
                big_sum[i] = char((s % 10) + 48);
                carry = s / 10;
                big_sum_length++;
            }
        }
        if (carry != 0)
        {
            big_sum[max_length] = char(carry + 48);
            big_sum_length++;
        }

        char result[101];

        for (int i = 0; i < big_sum_length; i++)
        {
            result[i] = big_sum[big_sum_length - 1 - i];
        }
        result[big_sum_length] = '\0';

        cout << result << '\n';
    }

    return 0;
}
