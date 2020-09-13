#include <stdio.h>

int main(void)
{
    int array[] = {1, 6, 3, 5};

    int n = sizeof(array) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                int temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i\t", array[i]);
    }

    printf("\n");
}