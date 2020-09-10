#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("usage: temperature c/f\n");
        return 1;
    }

    if (strcmp(argv[1], "c") != 0 && strcmp(argv[1], "f") != 0)
    {
        printf("usage: temperature c/f\n");
        return 2;
    }

    float f, c;

    if (strcmp(argv[1], "c") == 0)
    {
        printf("Enter the temperature in fahrenheit:");
        scanf("%f", &f);

        c = (f - 32) * 5 / 9;

        printf("Your temperature in celcius is %.1f\n", c);
        return 0;
    }

    if (strcmp(argv[1], "f") == 0)
    {
        printf("Enter the temperature in celsius:");
        scanf("%f", &c);

        f = (c * 9/5) + 32;

        printf("Your temperature in fahrenheit is %.1f\n", f);
        return 0;
    }
}