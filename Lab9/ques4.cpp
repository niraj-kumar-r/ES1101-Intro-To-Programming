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

    while (t--)
    {
        int n = 1;
        cin >> n;

        int *smallArrLeft = new int[n];

        if (smallArrLeft == NULL)
        {
            return 1;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> *(smallArrLeft + i);
        }

        int m = 1;
        cin >> m;

        int *smallArrRight = new int[m];

        if (smallArrRight == NULL)
        {
            return 1;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> *(smallArrRight + i);
        }

        int *S = new int[n + m];

        if (S == NULL)
        {
            return 1;
        }

        int indexLeft = 0, indexRight = 0, indexS = 0;

        while (indexLeft < n && indexRight < m)
        {
            if (*(smallArrLeft + indexLeft) <= *(smallArrRight + indexRight))
            {
                *(S + indexS) = *(smallArrLeft + indexLeft);
                indexLeft++;
            }
            else
            {
                *(S + indexS) = *(smallArrRight + indexRight);
                indexRight++;
            }

            indexS++;
        }
        while (indexLeft < n)
        {
            *(S + indexS) = *(smallArrLeft + indexLeft);
            indexLeft++;
            indexS++;
        }
        while (indexRight < m)
        {
            *(S + indexS) = *(smallArrRight + indexRight);
            indexRight++;
            indexS++;
        }

        for (int i = 0; i < (m + n); i++)
        {
            cout << *(S + i) << ' ';
        }
        cout << '\n';

        delete[] smallArrLeft;
        delete[] smallArrRight;
        delete[] S;
    }
    return 0;
}
