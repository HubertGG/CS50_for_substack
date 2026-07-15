#include <cs50.h>
#include <stdio.h>
#include <string.h>

int scoring(string word);

int main(void)
{

    int score1 = scoring(get_string("dit moi le mot :"));

    printf("%i", score1);
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

    }
    return score;
}
