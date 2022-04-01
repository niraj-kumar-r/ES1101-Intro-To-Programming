#include <iostream>

using namespace std;

int main(void)
{
    int dec_num;
    cout << "Enter a number : ";
    cin >> dec_num;
    int n = dec_num, d;
    string rev_bin_str = "";
    if (n == 0)
    {
        rev_bin_str = "0";
    }

    while (n != 0)
    {
        d = n % 2;
        rev_bin_str = (rev_bin_str + to_string(d));
        n /= 2;
    }
    string actual_bin_string = "";

    for (int i = rev_bin_str.length() - 1; i >= 0; i--)
    {
        actual_bin_string += rev_bin_str[i];
    }

    int actual_bin_num = stoi(actual_bin_string);

    cout << actual_bin_num;

    return 0;
}