#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
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
        memset(magicSq, 0, n * n * sizeof(int));
        int i = 2, row = 0, col = (n - 1) / 2;
        magicSq[row][col] = 1;

        while (i <= n * n)
        {
            int new_row = row - 1;
            int new_col = col + 1;

            if (new_row < 0)
            {
                new_row += n;
            }
            if (new_col >= n)
            {
                new_col -= n;
            }

            if (magicSq[new_row][new_col] == 0)
            {
                magicSq[new_row][new_col] = i;
                i++;
                row = new_row;
                col = new_col;
            }
            else
            {
                row += 1 + 1;
                col -= 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << magicSq[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}
