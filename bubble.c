#include <stdio.h>

int main(void)
{
    int array[] = {9, 6, 4};
    int n = sizeof(array) / sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%i\t", array[i]);
    }
    printf("\n");
}