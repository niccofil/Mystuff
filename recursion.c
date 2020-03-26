#include <stdio.h>

int sum(int n);

int main(void)
{
    int input, value;
    printf("positive integer:");
    scanf("%i", &input);

    value = sum(input);
    printf("%i\n", value);
}

int sum(int n)
{
    if (n == 0)

        return 0;

    else

        return n + sum(n - 1);
}