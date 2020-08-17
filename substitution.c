#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int condition(char* g_argv); // checking conditions for key
int main(int argc, char* argv[])
{

    if (argc != 2) //accepting only 2 command line arguments
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    if (condition(argv[1]) == true)
    {
        return 1;
    }

    char text[20];

    int lentex = strlen(text);     // length of input text
    int lenargv = strlen(argv[1]); // lenght of second cmd-line argument

    printf("Plaintext:");
    scanf ("%s", text);

    printf("ciphertext:");

    for (int i = 0; i < lentex; i++)
    {
        int alphtl = text[i] % 97; // alphabetic value of lower case input text
        int alphtu = text[i] % 65; // alphabetic value of upper case input text

        if (ispunct(text[i]) != 0 || isspace(text[i]) != 0 || isdigit(text[i]) != 0)
        {
            printf("%c", text[i]);
        }

        for (int j = 0; j < lenargv; j++) // counting number of key values
        {

            if (alphtl == j && isupper(argv[1][j]) != 0) // ordinal value of key is equal to alphabetic value of  input text
            {
                int low = argv[1][j] + 32;
                printf("%c", low);
            }

            if (alphtu == j && islower(argv[1][j]) != 0)
            {

                int up = argv[1][j] - 32;
                printf("%c", up);
            }
        }
    }

    printf("\n");
}

int condition(char* g_argv)

{
    int length = strlen(g_argv);

    if (length != 26)
    {
        printf("Key must contain only 26 characters\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {

        if (isdigit(g_argv[i]) != 0)
        {
            printf("Key must contain only alphabetical characters\n");
            return 1;
        }

        for (int j = 0; j < i; j++)
        {
            if (g_argv[j] == g_argv[i])
            {
                printf("Key must not contain repeated characters\n");
                return 1;
            }
        }
    }

    return 0;
}
