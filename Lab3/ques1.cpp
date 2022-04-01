#include <iostream>

using namespace std;

int main(void)
{
    int num = 1;

    cout << "Enter a Number : ";
    cin >> num;
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    return 0;
}
