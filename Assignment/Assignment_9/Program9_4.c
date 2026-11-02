#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : OddFactorial
//    Description   : Accepts an integer from the user and calculates its odd factorial by multiplying all
//                    odd numbers from the given number down to 1. If the number is negative, its absolute
//                    value is considered.
//
//    Input         : iNo
//
//    Output        : Input 5   -> 15 (5 * 3 * 1)
//                    Input -5  -> 15 (5 * 3 * 1)
//                    Input 10  -> 945 (9 * 7 * 5 * 3 * 1)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;    
}