#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string g_argv;
int condition(string g_argv); // checking conditions for key
int main(int argc, string argv[])
{

    if (argc == 2) //accepting only 2 command line arguments

        if (condition(argv[1]) != true)
        {
            string text = get_string("plaintext:");
            int lentex = strlen(text);     // length of input text
            int lenargv = strlen(argv[1]); // lenght of second cmd-line argument
            int alphtl;                    // alphabetic value of input lower text;
            int alphtu;                    // alphabetic value of input upper text;

            printf("ciphertext:");

            for (int i = 0; i < lentex; i++)
            {

                if (islower(text[i]) != 0)
                {
                    alphtl = text[i] % 97;
                }

                if (isupper(text[i]) != 0)
                {
                    alphtu = text[i] % 65;
                }

                if (ispunct(text[i]) != 0 || isspace(text[i]) != 0) // if other non alph. characters are present
                {
                    printf("%c", text[i]);
                }

                for (int j = 0; j < lenargv; j++) // counting number of key values
                {
                    //ordinal value of key equal to  alphtl
                    if (alphtl == j && ispunct(text[i]) == 0 && isspace(text[i]) == 0)
                    {
                        if (isupper(argv[1][j]) != 0)
                        {
                            char low = argv[1][j] + 32; // converts upper cases of key to lower if input is lower
                            printf("%c", low);
                        }

                        if (islower(argv[1][j]) != 0) // cases remain the same if input is upper case
                        {
                            printf("%c", argv[1][j]);
                        }
                    }
                    //ordinal values of key equal to alphtu
                    if (alphtu == j && ispunct(text[i]) == 0 && isspace(text[i]) == 0)
                    {
                        if (isupper(argv[1][j]) != 0)
                        {
                            printf("%c", argv[1][j]);
                        }

                        if (islower(argv[1][j]) != 0)
                        {
                            char up = argv[1][j] - 32; // converts lower cases of key to upper if input if upper
                            printf("%c", up);
                        }
                    }
                }
            }

            printf("\n");
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
        }
    }
}
