#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : FindGreaterNumber
//    Description   : Accepts two numbers from the user and determines whether the first number is greater,
//                    the second number is greater, or both numbers are equal.
//
//    Input         : iValue1, iValue2
//
//    Output        : Input 20, 30 -> Second Number Is Greater
//                    Input 40, 14 -> First Number Is Greater
//                    Input 25, 25 -> Both Numbers Are Equal
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("First number is greater \n");
    }
    else if(iFirst < iSecond)
    {
        printf("Second number is greater\n");
    }
    else
    {
        printf("Both numbers are equal \n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}