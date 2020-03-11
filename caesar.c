#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int i;
        int c;
        int k = atoi(argv[1]);
        for (i = 0; i < strlen(argv[1]); i++)
        {
            c = isdigit(argv[1][i]);
        }

        if (c > 0 && k > 0)
        {
            printf("%i \n", k);
        }

        else
        {
            printf("usage: ./caesar key\n");
        }
    }

    else
    {
        printf("usage: ./caesar key\n");
    }
}
