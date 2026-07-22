#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");
    int l = 0; //anol -> average number of letter per 100 words
    int s = 0; // average number of sentences per 100 words
    int now = 0; //number of words
    int index = 0.0588 * l - 0.296 * s - 15.8;
    int letters = 0;
    int words = 0;
    bool current_word = false;

    for(int i = 0, n = strlen(text); i < n; i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
            current_word = true;
        }
        if(current_word == true && (isspace(text[i]) || ispunct(text[i])))
        {
            words++;
            current_word = false; // so multiple space can not be counted as word.
        }
    }
    printf("%i\n", letters);
    printf("%i\n", words);




}
