#include <stdio.h>
#include <stdlib.h>
int main()
{
float price;
float total;
int num = 0;
float avg;
printf("Enter a item price: ");
for(int i = 0; i < 10; i++)
{
scanf("%f", &price);
total += price;
if(price > 200)
num++;
}
printf("The average of a item is %f\n", total/10);
printf("The number of items whose price is greater than 200 is %d", num);
return 0;
}
