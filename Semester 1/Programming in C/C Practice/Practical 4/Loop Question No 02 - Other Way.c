#include<stdio.h>
int main()
{
    int marks,i;
    float total=0, average;
    char grade=0;

    for(i=1;i<=10;i++)
    {
        printf("Please Enter the Marks %d: ",i);
        scanf("%d", &marks);

        total=total+marks;

    }

   average=total/10;



   printf("The Total %.2f and Average %.2f \n", total, average);

   if(average<50)
   {
       printf("The Overall Result is Fail");
   }

   else
   printf("The Overall Result is Pass");

}
