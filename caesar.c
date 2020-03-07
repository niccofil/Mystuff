#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int k = atoi(argv[1]);
        printf("%d\n", k);
    }

    else
    {
        printf("usage: ./caesar key\n");
    }
}