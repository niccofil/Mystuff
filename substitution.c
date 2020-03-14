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
        if (condition(argv[1]) == false)
        {
            printf("good\n");
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
    int lenght = strlen(g_argv);
    if (lenght != 26)
    {
        printf("Key must contain only 26 characters\n");
        return 1;
    }

    else
    {
        for (int i = 0; i < lenght; i++)
        {

            if (isdigit(g_argv[i]) != 0)
            {
                printf("Key must contain only alphabetical characters\n");
                break;
            }
        }
    }

    return 1;
}
