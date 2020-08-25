#include <stdio.h>
typedef int myint;

int main (void)
{
    typedef struct {
        
        char name[20];
        myint age;
        char gpa;
    } student;

    

    student st[3];

    for (myint i = 0; i < 3; i++)
    {
        st[i].age = 15 + i;

        printf ("%i\n", st[i].age);

    }

}
    