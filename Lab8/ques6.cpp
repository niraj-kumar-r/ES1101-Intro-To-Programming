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

        int *counter = A;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> *(counter++);
            }
        }

        counter = B;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> *(counter++);
            }
        }

        add2Matrices(A, B, C, m, n);

        counter = C;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << *(counter++) << ' ';
            }

            cout << '\n';
        }

        free(A);
        free(B);
        free(C);
    }

    return 0;
}

void add2Matrices(int *A, int *B, int *C, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *C = *A + *B;
            A++;
            B++;
            C++;
        }
    }
}
