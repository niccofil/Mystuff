#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{

    if (argc == 2 && atoi(argv[1]))
    {
        printf("Succes %s\n", argv[1]);
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}