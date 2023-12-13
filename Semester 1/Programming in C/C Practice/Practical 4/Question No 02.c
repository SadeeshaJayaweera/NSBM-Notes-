#include<stdio.h>

int main()
{
  int i, n, mark, total = 0, max_mark = 0, min_mark = 100;

  for(i=0; i<10; i++)
  {
    printf("Enter mark for student %d: ", i+1);
    scanf("%d", &mark);

    total = total+mark; //total+=mark
    if(mark > max_mark)
      max_mark = mark;
    if(mark < min_mark)
      min_mark = mark;
  }

  float average = (float)total / 10;

  printf("Maximum mark is: %d\n", max_mark);
  printf("Minimum mark is: %d\n", min_mark);
  printf("Average mark is: %.2f\n", average);

  return 0;
}
