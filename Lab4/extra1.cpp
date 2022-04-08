#include <iostream>
#include <math.h>

using namespace std;

float calcLog10(float num, float divFactor = 10);

int main(void)
{
    float n = 1;
    cout << "Enter a number : ";
    cin >> n;
    cout << calcLog10(n);
    return 0;
}

float calcLog10(float num, float divFactor)
{

    if (num < divFactor)
    {
        return num;
    }
    else
    {
        return calcLog10(num / divFactor);
    }
}