#include <stdio.h>
int main()
{
    int x;
    int y;
    int tot;
    x =35;
    y =45;

    tot =x+y;
    printf("The Sum of the integers: %d", tot);

    //The above code is not allowing user to input numbers and calculate the total
    //When using the first code please comment the second code

    int num1, num2, tot;
    printf("Enter the Number One ");
    scanf("%d", &num1);
    printf("Enter the Number Two ");
    scanf("%d", &num2);
    tot = num1+num2;
    printf("The Sum of the Numbers= %d", tot);

    // This is the second way where the user allows to enter the numbers amd get the sum
    // when running the second code please comment the first code otherwise wont work


}

