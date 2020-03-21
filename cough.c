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
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}