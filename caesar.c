#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int num = atoi(argv[1]);

    if (argc == 2 && num)
    {
        printf("Succes\n");
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
}