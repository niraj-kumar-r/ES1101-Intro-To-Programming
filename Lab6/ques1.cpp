#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 1;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        char word[100];

        cin >> word;

        int num_small = 0, num_cap = 0, num_dig = 0, num_total = 0;

        for (int i = 0; word[i] != '\0'; i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                num_small++;
            }
            else if (word[i] >= 'A' && word[i] <= 'Z')
            {
                num_cap++;
            }
            else if (word[i] >= '0' && word[i] <= '9')
            {
                num_dig++;
            }
            num_total++;
        }
        cout << num_small << " " << num_cap << " " << num_dig << " " << num_total << endl;
    }
    return 0;
}
