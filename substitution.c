#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int condition(string g_argv); // checking conditions for key
int main(int argc, string argv[])
{

    if (argc == 2) //accepting only 2 command line arguments
    {
        if (condition(argv[1]) != true)
        {
            string text = get_string("plaintext:");
            int lentex = strlen(text);     // length of input text
            int lenargv = strlen(argv[1]); // lenght of second cmd-line argument

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

                    if (j == alphtl) // ordinal value of key is equal to alphabetic value of lower case input text
                    {
                        if (isupper(argv[1][j]) != 0)
                        {
                            int low = argv[1][j] + 32;
                            printf("%c", low);
                        }

                        if (islower(argv[1][j]) != 0)
                        {
                            printf("%c", argv[1][j]);
                        }
                    }

                    if (j == alphtu)
                    {
                        if (isupper(argv[1][j]) != 0)
                        {
                            printf("%c", argv[1][j]);
                        }

                        if (islower(argv[1][j]) != 0)
                        {
                            int up = argv[1][j] - 32;
                            printf("%c", up);
                        }
                    }
                }
            }

            printf("\n");
        }

        else
        {
            return 1;
        }
    }

    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}

int condition(string g_argv)

{
    int length = strlen(g_argv);
    if (true)
    {
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
    }

    return 0;
}
