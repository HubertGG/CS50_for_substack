#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int scoring(string word);

int main(void)
{

    int score1 = scoring(get_string("Player 1: "));
    int score2 = scoring(get_string("Player 2: "));

    if(score1 > score2)
    {
        printf("Player 1 wins !\n");
    }
    if(score1 < score2)
    {
        printf("Player 2 wins !\n");
    }
    else
    {
        printf("Ties !\n");
    }
}

int scoring(string word)
{
    string letters[7];
    letters[0] = "aeilnorstu";
    letters[1] = "dg";
    letters[2] = "bcmp";
    letters[3] = "fhvy";
    letters[4] = "k";
    letters[5] = "jx";
    letters[6] = "qz";
    int score = 0;


    for(int i = 0, n = strlen(word); i < n; i++)
    {
        if isupper(word[i])
        {
            word[i] = tolower(word[i]);
        }
        for(int j = 0, m = strlen(letters[0]); j < m; j++)
        {
            if(word[i] == letters[0][j])
            {
                score += 1;
            }
        }
        for(int j = 0, m = strlen(letters[1]); j < m; j++)
        {
            if(word[i] == letters[1][j])
            {
                score += 2;
            }
        }
        for(int j = 0, m = strlen(letters[2]); j < m; j++)
        {
            if(word[i] == letters[2][j])
            {
                score += 3;
            }
        }
        for(int j = 0, m = strlen(letters[3]); j < m; j++)
        {
            if(word[i] == letters[3][j])
            {
                score += 4;
            }
        }
        for(int j = 0, m = strlen(letters[4]); j < m; j++)
        {
            if(word[i] == letters[4][j])
            {
                score += 5;
            }
        }
        for(int j = 0, m = strlen(letters[5]); j < m; j++)
        {
            if(word[i] == letters[5][j])
            {
                score += 8;
            }
        }
        for(int j = 0, m = strlen(letters[3]); j < m; j++)
        {
            if(word[i] == letters[3][j])
            {
                score += 10;
            }
        }
    }
    return score;
}
