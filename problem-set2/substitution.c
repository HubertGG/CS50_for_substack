#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    string key = argv[1];

    if(argc != 2)
    {
        printf("ERROR, this program needs 1 command-line argument (the key).\n");
        return 1;
    }
    if(strlen(key) != 26)
    {
        printf("ERROR, the key must be 26 caracters long.\n");
        return 1;
    }
    for(int i = 0, n = strlen(key); i < n; i++) //check if all char are alphabetical
    {
        if(isalpha(key[i]))
        {
            continue;
        }
        else
        {
            printf("ERROR, the caracters must be alphabetical.\n");
            return 1;
        }
    }

    string alpha = "abcdefghijklmnopqrstuvwxyz";
    int caracter_count = 0;

    for(int i = 0, n = 26; i < n; i++)
    {
        caracter_count = 0;
        for(int j = 0, m = 26; j < m; j++)
        {
            if(alpha[i] == key[j])
            {
                caracter_count++;
                if(caracter_count != 1)
                {
                    printf("ERROR\n");
                    return 1;
                }
            }
        }
    }
}
