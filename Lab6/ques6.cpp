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
        char S[301], new_S[301];
        cin.getline(S, 301);

        int j = 0;

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] != ' ' && S[i] != '\n')
            {
                new_S[j] = S[i];
                j++;
            }
        }
        new_S[j] = '\0';

        cout << new_S;
    }
    return 0;
}
