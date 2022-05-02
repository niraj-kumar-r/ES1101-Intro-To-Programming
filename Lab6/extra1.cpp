#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int t = 1;
    cout << "Enter the number the of test cases: ";
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string S1, S2;
        cout << "Enter a string: ";
        getline(cin, S1);
        cout << "Enter another string: ";
        getline(cin, S2);

        sort(S1.begin(), S1.end());
        sort(S2.begin(), S2.end());

        if (S1 == S2)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}