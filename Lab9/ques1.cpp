#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct rollAndHeight
{
    int rollNo;
    int height;
};

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n = 1;
        cin >> n;

        struct rollAndHeight arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].rollNo >> arr[i].height;
        }

        int maxHeight = arr[0].height, maxHeightRollNo = arr[0].rollNo;

        for (int i = 0; i < n; i++)
        {
            if (arr[i].height > maxHeight)
            {
                maxHeight = arr[i].height;
                maxHeightRollNo = arr[i].rollNo;
            }
        }

        cout << maxHeightRollNo << ' ' << maxHeight << '\n';
    }
    return 0;
}
