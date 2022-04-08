#include <iostream>
#include <math.h>

using namespace std;

double calcLog10(double num, int precisionFactor = 10);

int main(void)
{
    double n = 1;
    cout << "Enter a number : ";
    cin >> n;
    double log10OfN = calcLog10(n);
    cout << "Our function gives " << log10OfN << "\n";
    cout << "Actual value " << log10(n) << "\n";
    return 0;
}

double calcLog10(double num, int precisionFactor)
{
    double log10Value = 0;
    double naturalLogValue = 0;
    double eValue = exp(1);

    while ((num / eValue) > 1)
    {
        naturalLogValue += 1;
        num /= eValue;
    }

    for (int i = 1; i <= precisionFactor; i++)
    {
        naturalLogValue += (pow(-1, i - 1) * pow(num - 1, i)) / (i);
    }

    log10Value += naturalLogValue / 2.303;

    return log10Value;
}