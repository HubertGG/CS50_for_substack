
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    double l = 0; //average number of letter per 100 words
    double s = 0; // average number of sentences per 100 words
    int letters = 0;
    int words = 0;
    bool current_word = false;
    int sentences = 0;

    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
            current_word = true;
        }
        if(current_word == true && (isspace(text[i]) || ispunct(text[i])))
        {
            if(text[i] != '-' && text[i] !='\'')
            {
                words++;
                current_word = false; // so multiple space can not be counted as word.
                if (text[i] == '.' || text[i] == '?' || text[i] == '!')
                {
                    sentences++; // number will be wrong if there is multiple punctiation like "..."
                }
            }
        }
    }
    l = (float)letters / words * 100;
    s = (float)sentences / words * 100;
    int index = round(0.0588 * l - 0.296 * s - 15.8);


    printf("letters : %i\n", letters);
    printf("words : %i\n", words);
    printf("sentences : %i\n", sentences);
    printf("Index : %i\n", index);

}

