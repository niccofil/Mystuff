#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{
if (argc != 2)
{
printf ("Please, insert the name of AI\n");
return 1;
}

if (strcmp(argv[1], "astra") != 0)
{
printf ("It is not %s. It is actually astra\n", argv[1]);
return 1;
}

char name[20];
int age;

printf ("Hi. I am Astra. What is your name?\n");
scanf ("%s",name);
printf ("Nice to meet you %s\n", name);

printf ("How old are you?\n");
scanf ("%i", &age);

if (age > 60)
{
printf ("Almost like my grandpa\n");
}

else
{
printf("So young! Only %i years old!\n", age);
}
return 0;
}
