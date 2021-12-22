#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //ToDo:get the string from user
    string INPUT = get_string("Text: ");


    //ToDo:number of letters, words, sentences
    int letters = 0;
    int words = 1;
    int sentences = 0;
    for (int i = 0; i < strlen(INPUT); i++)
    {
        if ((INPUT[i] >= 'a' && INPUT[i] <= 'z') || (INPUT[i] >= 'A' && INPUT[i] <= 'Z'))
        {
            letters++;
        }
        if (INPUT[i] == ' ')
        {
            words++;
        }
        if (INPUT[i] == '.' || INPUT[i] == '!' || INPUT[i] == '?')
        {
            sentences++;
        }
    }


    //ToDo:use coleman-liau to get grade
    float grade = 0.0588 * (100 * (float)letters / (float)words) - 0.296 * (100 * (float)sentences / (float)words) - 15.8;


    //ToDo:round it off
    int last_grade = round(grade);


    //ToDo:print the grade
    if (last_grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (last_grade > 1 && last_grade < 16)
    {
        printf("Grade %i\n", last_grade);
    }
    else
    {
        printf("Grade 16+\n");
    }
}

