#include <stdio.h>

int collatz(int n);

int main(void)
{
    int steps, value;

    printf("positive integer:");
    scanf("%i", &value);

    steps = collatz(value);
    if (value != 1)

        printf("%i steps\n", steps);

    else

        printf("1 step\n");
}

int collatz(int n)
{
    // base case
    if (n == 1)
    {
        return 0;
    }

    // recursive case
    if ((n % 2) == 0)
    {
        return 1 + collatz(n / 2);
    }

    else
    {
        return 1 + collatz(3 * n + 1);
    }
}
