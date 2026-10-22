#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CalculateEmployeeBonus
//    Description   : Accepts an employee's monthly salary and years of service, and calculates the bonus
//                    based on the applicable bonus criteria.
//    Input         : iSalary, iYearsOfService
//    Output        : Input 30000 12 -> Bonus = 4500
//                    Input 20000 7  -> Bonus = 2000
//                    Input 10000 2  -> Bonus = 500
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CalculateBonus(float Salary, int Years)
{
    float Bonus = 0.0f;

    if (Salary <= 0 || Years <= 0)
    {
        printf("Enter Valid Input\n");
        return;
    }
    else if(Years > 10)
    {
        Bonus = (Salary * 15) / 100;
        printf("Bonus is %f\n", Bonus);
    }
    else if(Years < 10 && Years >= 5)
    {
        Bonus = (Salary * 10) / 100;
        printf("Bonus is %f\n", Bonus);
    }
    else 
    {
        Bonus = (Salary * 5) / 100;
        printf("Bonus is %f\n", Bonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter employee salary :\n");
    scanf("%f", &fSalary);

    printf("Enter Years of Services :\n");
    scanf("%d", &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}