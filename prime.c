#include <stdio.h>

int main(void)
{
   int x, y;

   printf("insert first number:");
   scanf("%i", &x);

   printf("insert second number:");
   scanf("%i", &y);

   while (x <= y)
   {
      if ((x == 2 || x == 5 || x == 7 || x == 3) || (x != 1 && x % 2 != 0 && x % 3 != 0 && x % 7 != 0 && x % 10 != 5))
      {
         printf("%d\t", x);
      }

      x++;
   }

   printf("\n");
}
