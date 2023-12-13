#include<stdio.h>
int main()
{

    int positive=0, negative=0, zeroes=0, counter=1,numbers;

    while(counter<=10)
    {
        printf("Please Enter the Number%d: " ,counter);
        scanf("%d", &numbers);


         if(numbers>0) {
            positive=positive+1;
         }


        else if(numbers=0)
        {
            zeroes=zeroes+1;
        }

        else
        {
            negative=negative+1;
        }

        counter++;
    }

    printf(" The Number of Positives : %d negative %d and Zeroes %d", positive, negative, zeroes );
}
