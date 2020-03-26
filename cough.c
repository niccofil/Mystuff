#include <stdio.h>

void cough(int n);

int main(void)
{
    int c;

    printf("number of coughs:");
    scanf("%i", &c);

    cough(c);
}

void cough(int n)
{
    if (n == 0)
    {
        return;
    }

    else
    {
        cough(n - 1);

        for (int i = 0; i < n; i++)
        {
            printf("#");
        }

        printf("\n");
    }
}