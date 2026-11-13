#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts an integer from the user and displays the first given number of even numbers
//                    in increasing order.
//
//    Input         : iNo
//
//    Output        : Input 8 -> 2 4 6 8 10 12 14 16
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-13
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    int iNum = 0;

    for(iCnt = 1, iNum = 2; iCnt <= iNo; iCnt++, iNum += 2)
    {
        printf("%d\t", iNum);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements :\n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}