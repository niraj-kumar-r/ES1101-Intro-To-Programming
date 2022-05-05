#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int countOccurrences(char Sentence[], char word[]);

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

int countOccurrences(char Sentence[], char word[])
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        char sentence[1001];
        cin.getline(sentence, 1001);

        char word[100];
        cin.getline(word, 100);

        char n_word[100];
        int n_len = 0;

        int count = 0;

        for (int i = 0; sentence[i] != '\0'; i++)
        {
            if (sentence[i] == '.' || sentence[i] == ',')
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
    }
}
