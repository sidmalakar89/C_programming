#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckPositiveOrNegative
//    Description   : Accepts an integer from the user and determines whether the number is positive, negative,
//                    or zero.
//
//    Input         : iValue
//
//    Output        : Input 21  -> Positive Number
//                    Input -6  -> Negative Number
//                    Input 0   -> Zero (Neither Positive Nor Negative)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    if(iValue < 0)
    {
        printf("It is negative number \n");
    }
    else if(iValue > 0)
    {
        printf("It is positive number \n");
    }
    else
    {
        printf("zero \n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
