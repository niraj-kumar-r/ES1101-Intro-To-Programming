#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int countOccurrences(char Sentence[], char word[]);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t = 1;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        char sen[1001], w[100];
        cin.getline(sen, 1001);
        cin.getline(w, 100);

        cout << countOccurrences(sen, w) << '\n';
    }
    return 0;
}

int countOccurrences(char sentence[], char word[])
{

    char n_word[100];
    int n_len = 0;

    int count = 0;

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '.' || sentence[i] == ',')
        {
            n_word[n_len] = '\0';

            if (strcmp(n_word, word) == 0)
            {
                count++;
            }

            n_len = 0;
        }

        else
        {
            n_word[n_len] = sentence[i];
            n_len++;
        }
    }
    return count;
}