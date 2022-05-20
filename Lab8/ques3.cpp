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

        int magicSq[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> magicSq[i][j];
            }
        }

        int sumVal = 0;

        for (int k = 0; k < n; k++)
        {
            sumVal += magicSq[0][k];
        }

        int sumArr[(2 * n) + 2] = {};
        int sumArrIndex = 0;

        int dia1 = 0, dia2 = 0;

        for (int i = 0; i < n; i++)
        {
            int col = 0;
            int row = 0;

            for (int j = 0; j < n; j++)
            {
                row += magicSq[i][j];
                col += magicSq[j][i];
            }

            sumArr[sumArrIndex] = col;
            sumArr[sumArrIndex + 1] = row;
            sumArrIndex += 2;

            dia1 += magicSq[i][i];
            dia2 += magicSq[i][n - i - 1];
        }
        sumArr[sumArrIndex] = dia1;
        sumArr[sumArrIndex + 1] = dia2;

        sumArrIndex += 2;

        int result = 1;

        for (int i = 0; i < (2 * n) + 2; i++)
        {
            if (sumArr[i] != sumVal)
            {
                result = 0;
                break;
            }
        }

        cout << result << '\n';
    }
    return 0;
}
