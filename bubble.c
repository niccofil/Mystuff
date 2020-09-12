#include <stdio.h>
void swap(int *a, int *b);
void bubble_sort(int a[], int n);
void print_array(int a[], int n);

int main(void)
{
    int array[] = {1, 10, 7, 5, 6, 3, 4, 2};
    int n = sizeof(array) / sizeof(int);

    bubble_sort(array, n);
    print_array(array, n);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int a[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

void print_array(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%i\t", a[i]);
    }
    printf("\n");
}
