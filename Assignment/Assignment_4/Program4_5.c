#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckDivisibilityBy5
//    Description   : Accepts an integer from the user and determines whether it is divisible by 5.
//
//    Input         : iNo
//
//    Output        : Input 45 -> Divisible by 5
//                    Input 23 -> Not Divisible by 5
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckDivisibility(int iNo)
{
    if ( iNo % 5 == 0)
    {
        printf("%d is Divisible by 5 \n", iNo);
    }
    else
    {
        printf("%d is not Divisible by 5 \n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}