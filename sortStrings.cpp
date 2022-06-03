#include <iostream>
#include <cstring>

using namespace std;

int my_comp_string(char c[], char b[])
{
    if (c[0] == '\0' || b[0] == '\0')
        return 0;

    if (int(c[0]) > int(b[0]))
        return 1;
    else if (int(c[0]) < int(b[0]))
        return -1;

    int ans = my_comp_string(c + 1, b + 1);
    return ans;
}
/*
ball balloon
*/

int main()
{
    int n;
    cin >> n;

    char a[n][100];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (my_comp_string(a[minindex], a[j]) == 1)
            {
                minindex = j;
            }
        }

        if (minindex != i)
        {
            char temp[100];
            strcpy(temp, a[i]);
            strcpy(a[i], a[minindex]);
            strcpy(a[minindex], temp);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; a[i][j] != '\0'; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}