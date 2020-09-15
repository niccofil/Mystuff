#include <stdio.h>

int main(void)
{
  typedef struct{
	  int score;
	  char*name;
  }student;

  int n;

  printf("number of students:");
  scanf("%i",&n);
  student student[n].score;

  for (int i = 0; i < n; i++)
  {
	printf("Student %i score:",i+1);
	scanf("%i",student[i].score);
  }
  
  int mean = student[n].score / n;
  printf("%i\n", mean);
}


