#include <stdio.h>

int main(void)
{
  typedef struct{
	  float score;
	  char name[20];
  }students;

  int n;
  float sum = 0;

  printf("number of students:");
  scanf("%i",&n);
  students student[n];

  for (int i = 0; i < n; i++)
  {     printf("Student %i name:", i+1);
	scanf("%s",student[i].name);

	printf("Student %i score:",i+1);
	scanf("%f",&student[i].score);
        sum += student[i].score;
  }
  for (int i = 0; i < n - 1; i++)
  {
	for (int j = 0; j < n - 1 - i; j++)
	{
		if (student[j].score > student[j + 1].score)
		{
			int tmp = student[j].score;
			student[j].score = student[j + 1].score;
			student[j+1].score = tmp;
		}
	}
  }	
  float mean = sum / n;

  printf("The best score is %i by %s", student[i].score, student[i].name);
  printf("Average score is %.1f\n", mean);
}


