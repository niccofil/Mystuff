#include <stdio.h>

int fact(int n);

int main(void)
{
    int input, value;

    printf("Positive integer:");
    scanf("%i", &input);

    value = fact(input);
    printf("%i\n", value);
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return n * fact(n - 1);
    }
}