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
        int p = 1, q = 1, r = 1;
        cin >> p >> q >> r;

        int matA[p][q], matB[q][r];

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> matA[i][j];
            }
        }

        for (int i = 0; i < q; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cin >> matB[i][j];
            }
        }

        int matMulResult[p][r];

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < r; j++)
            {
                int elem = 0;

                for (int k = 0; k < q; k++)
                {
                    elem += matA[i][k] * matB[k][j];
                }

                matMulResult[i][j] = elem;
            }
        }

        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < r; j++)
            {
                cout << matMulResult[i][j] << ' ';
            }
        }

        cout << '\n';
    }
    return 0;
}
