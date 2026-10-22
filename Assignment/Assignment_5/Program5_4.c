#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckDivisibilityBy3And5
//    Description   : Accepts an integer and determines whether it is divisible by both 3 and 5, only by 3,
//                    only by 5, or by neither 3 nor 5.
//
//    Input         : iNo
//
//    Output        : Input 15 -> Divisible by Both 3 and 5
//                    Input 9  -> Divisible by 3
//                    Input 10 -> Divisible by 5
//                    Input 7  -> Not Divisible by 3 or 5
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckMultipleDivisibility(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        printf("It is Divisible by Both \n");
    }
    else if(iNo % 3 == 0)
    {
        printf("It is Divisible by 3\n");
    }
    else if(iNo % 5 == 0)
    {
        printf("It is Divisible by 5\n");
    }
    else 
    {
        printf("It is not Divisible by both \n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number :\n");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}