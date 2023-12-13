#include <stdio.h>
#include <stdlib.h>

int main()
{
    int employeeNo;
    float basicSalary;
    int num = 0;

    while (1)
    {
        printf("Enter Employee number: ");
        scanf("%d", &employeeNo);

        if (employeeNo == -999)
            break;

        printf("Enter your salary: ");
        scanf("%f", &basicSalary);

        if (basicSalary >= 5000)
            num++;
    }

    printf("The number of employees whose basic salary is >= 5000 are %d", num);

    return 0;
}
