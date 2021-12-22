#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //ToDo:track the inputed key and make sure theres only 2argc
    int tracker = 0;
    int key = 0;

    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            //ToDo:make sure they are only numbers
            if (isdigit(argv[1][i]))
            {
                tracker += 1;
            }
        }
        if (tracker == strlen(argv[1]))
        {
            //ToDo:string to integer for argv[1]
            key = atoi(argv[1]);

            //ToDo:prompt user for plaintext AND print ciphertext as start of line
            string plain_text = get_string("plaintext:  ");
            printf("ciphertext: ");

            //check each character of plaintext
            for (int j = 0, m = strlen(plain_text); j < m; j++)
            {
                //ToDo:check if the char is an uppercase OR lowercase OR none
                if (isalpha(plain_text[j]) && isupper(plain_text[j]))
                {
                    printf("%c", (((plain_text[j] - 65) + key) % 26) + 65);
                }
                else if (isalpha(plain_text[j]) && islower(plain_text[j]))
                {
                    printf("%c", (((plain_text[j] - 97) + key) % 26) + 97);
                }
                else
                {
                    printf("%c", plain_text[j]);
                }
            }
            printf("\n");
            return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
/////////WTF: it took me 13H :I OMFG this is HARddddddddd
