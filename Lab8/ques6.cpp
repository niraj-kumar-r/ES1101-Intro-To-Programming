#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

void add2Matrices(int *A, int *B, int *C, int m, int n);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t = 1;
    cin >> t;

    while (t--)
    {
        int m, n;
        cin >> m >> n;

        int *A = (int *)malloc(m * n * sizeof(int));
        int *B = (int *)malloc(m * n * sizeof(int));
        int *C = (int *)malloc(m * n * sizeof(int));

        if (A == NULL || B == NULL || C == NULL)
        {
            return 1;
        }

        add2Matrices(A, B, C, m, n);

        for (int i = 1; i <= m * n; i++)
        {
            cout << *(C + i - 1) << ' ';
            if (i % 3 == 0)
            {
                cout << '\n';
            }
        }

        free(A);
        free(B);
        free(C);
    }

    return 0;
}

void add2Matrices(int *A, int *B, int *C, int m, int n)
{
    for (int i = 1; i <= m * n; i++)
    {
        *(C + i - 1) = *(A + i - 1) + *(B + i - 1);
    }
}
