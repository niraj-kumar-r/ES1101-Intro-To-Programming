#include <iostream>

using namespace std;

int compStringRecursive(char x[], char y[], int i = 0);

int main(void)
{
    char a[1000], b[1000];
    cout << "Enter the first string: ";
    cin.getline(a, 1000);
    cout << "Enter the second string: ";
    cin.getline(b, 1000);

    cout << compStringRecursive(a, b) << '\n';
}

int compStringRecursive(char x[], char y[], int i)
{
    if (x[i] < y[i])
    {
        return -1;
    }
    else if (x[i] > y[i])
    {
        return 1;
    }
    else if (x[i] == '\0' && y[i] == '\0')
    {
        return 0;
    }
    else
    {
        return compStringRecursive(x, y, i + 1);
    }
}