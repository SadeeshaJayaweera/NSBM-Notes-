#include <stdio.h>
int main()
{
    int num1,num2,num3;//variable declaration
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    //Takse three input num1,num2,num3 from user
//check smallest
    if(num1<num2 && num1<num3){
            //check whether num1 is smallest than num2 and num3
        printf("The Smallest Number is: %d\n",num1);
    }//if it is truen this statement is displayed
    else if(num2<num3){
        //when it is false then check num2 or num 3 to small
        printf("The Smallest Number is: %d\n",num2);//when it is true this statements is displayed
    }
    else{
        printf("The Smallest Number is: %d\n",num3);
    }//all statements are false this statement is displayed
//check largest
    if(num1>num2 && num1>num3){//check largest
            //check whether num1 is largest than num2 and num3
        printf("The Largest Number is: %d",num1);
    }//if it is true this statement is displayed
    else if(num2>num3){
        //when it is false then check num2 or num 3 to large
        printf("The Largest Number is: %d",num2);//when it is true this statements is displayed
    }
    else{
        printf("The Largest Number is: %d",num3);
    }//all conditions are false this statement is displayed
    return 0;
}
