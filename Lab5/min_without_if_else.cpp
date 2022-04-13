#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    double a = 0, b = 0;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter another number : ";
    cin >> b;

    double minValue = (a + b - fabs(a - b)) / 2;

    // can also do
    // double minValue = ((a >= b) * b) + ((a < b) * a);
    // a boolean is stored as either 1 or 0

    // could have also used ternary operation
    // or use while(boolean) and break in first iteration

    cout << "The minimum value is " << minValue;

    return 0;
}