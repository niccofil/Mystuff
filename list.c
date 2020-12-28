#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

void printlist(node *n)
{
    while (n != NULL)
    {
        printf("%i\n", n->number);
        n = n->next;
    }
}

void freelist(node *n)
{
    while (n != NULL)
    {
        node *tmp = n->next;
        free(n);
        n = tmp;
    }
}

int main(void)
{
    node *list = NULL;

    node *n = malloc(sizeof(node));

    n->number = 2;
    n->next = NULL;
    list = n;

    n = malloc(sizeof(node));

    n->number = 4;
    n->next = NULL;
    list->next = n;

    n = malloc(sizeof(node));

    n->number = 3;
    n->next = list->next;
    list->next = n;

    printlist(list);
    freelist(list);
}