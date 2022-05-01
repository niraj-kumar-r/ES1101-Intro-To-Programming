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
        char S[1001];
        cin.getline(S, 1001);

        bool check[26] = {false};

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] >= 'a' && S[i] <= 'z')
            {
                if (!check[int(S[i]) - 97])
                {
                    check[int(S[i]) - 97] = true;
                }
            }
        }

        bool pangram = true;

        for (int i = 0; i < 26; i++)
        {
            if (!check[i])
            {
                pangram = false;
                break;
            }
        }

        if (pangram)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 0 << '\n';
        }
    }

    return 0;
}