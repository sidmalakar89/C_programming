#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckEvenOrOdd
//    Description   : Accepts an integer from the user and determines whether the number is even or odd.
//
//    Input         : iValue
//
//    Output        : Input 18 -> Even Number
//                    Input 15 -> Odd Number
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("It is Even number \n");
    }
    else
    {
        printf("It is odd number \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number :\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}