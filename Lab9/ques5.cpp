#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool search(char *names[], char word[], int n);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n = 1;
        cin >> n;

        char **names = new char *[n];

        for (int i = 0; i < n; i++)
        {
            names[i] = new char[101];
            cin >> names[i];
        }

        char word[100];
        cin >> word;
        // use dynamic memory allocation to create space for each word

        if (search(names, word, n))
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }

        for (int i = 0; i < n; i++)
        {
            delete[] names[i];
        }

        delete[] names;
    }

    return 0;
}

bool search(char *names[], char word[], int n)
{
    bool result = false;

    for (int i = 0; i < n; i++)
    {
        if (strcmp(names[i], word) == 0)
        {
            result = true;
            break;
        }
    }
    return result;
}
