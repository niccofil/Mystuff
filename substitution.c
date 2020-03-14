#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string g_argv;
int condition(string g_argv);
int main(int argc, string argv[])
{
    g_argv == argv[1];
    if (argc == 2) //accepting only 2 command line arguments
    {
        if (condition(argv[1]) != true) // accepts only correct key
        {
            string text = get_string("plaintext:");
            printf("ciphertext:");
            int n = strlen(text);

            for (int i = 0; i < n; i++)
            {
                if (islower(text[i]) != 0)
                {
                    int alpht = text[i] % 97;
                }

                if (isupper(text[i]) != 0)
                {
                    int alpht = text[i] % 65;
                }
            }
        }
    }

    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}

int condition(string g_argv) //Conditions for key
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
        }
    }
}
