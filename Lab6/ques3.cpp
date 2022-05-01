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
        char num_string[100];
        cin >> num_string;
        int sum = 0;
        for (int i = 0; num_string[i] != '\0'; i++)
        {
            if (num_string[i] >= '0' && num_string[i] <= '9')
            {
                sum += int(num_string[i]) - 48;
            }
        }
        cout << sum << '\n';
    }
    return 0;
}
