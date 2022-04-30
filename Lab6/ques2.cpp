#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        char A[100], B[100];

        cin >> A;
        cin >> B;
        int out = 0;

        for (int i = 0; A[i] != 0; i++)
        {
            if (A[i] > B[i])
            {
                out = 1;
                break;
            }
            else if (A[i] < B[i])
            {
                out = -1;
                break;
            }
        }
        if (out == 0)
        {
            if (strlen(A) != strlen(B))
            {
                out = -1;
            }
        }
        cout << out << '\n';
    }
    return 0;
}