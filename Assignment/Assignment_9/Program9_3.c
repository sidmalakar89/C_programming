#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : EvenFactorial
//    Description   : Accepts an integer from the user and calculates its even factorial by multiplying all
//                    even numbers from the given number down to 2. If the number is negative, its absolute
//                    value is considered.
//
//    Input         : iNo
//
//    Output        : Input 5   -> 8 (4 * 2)
//                    Input -5  -> 8 (4 * 2)
//                    Input 10  -> 3840 (10 * 8 * 6 * 4 * 2)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0) // Here iCnt Checks whether the number is even for multiplication
        {
            iFact = iFact * iCnt;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;
}