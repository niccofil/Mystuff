#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]) // input only 2 cmd line arguments
{

    if (argc != 2)
    {
        printf("usage: ./caesar key\n");
        return 1;
    }

    char text[20];
    int i;
    int c;
    int k = atoi(argv[1]);
        
        
    for (i = 0; i < strlen(argv[1]); i++)
    {
        c = isdigit(argv[1][i]);
    }

    if (c < 0 && k < 0) //argv is digit
        
    {
        printf("usage: ./caesar key\n");
        return 1;
    }
    printf ("plaintext:");
    scanf ("%s",text);

    printf("ciphertext:");

    for (int j = 0; j < strlen(text); j++) // cipher transformation
    {
        int alpha;
        int ci;
        int out;

        if (isalpha(text[j]) != 0 && islower(text[j]) != 0)
        {
            alpha = text[j] % 97;  //alphabetical number
            ci = (alpha + k) % 26; // ciphered alph value
            out = ci + 97;         // ASCII value

            printf("%c", out);
        }

        if (isalpha(text[j]) != 0 && isupper(text[j]) != 0)
        {
            alpha = text[j] % 65;
            ci = (alpha + k) % 26;
            out = ci + 65;

            printf("%c", out);
        }

        if (ispunct(text[j]) != 0 || isspace(text[j]) != 0)
        {
            out = text[j];

            printf("%c", out);
        }

    }

    printf("\n");        
}