#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Factorial
//    Description   : Accepts an integer from the user and calculates its factorial. If the number is negative,
//                    its absolute value is considered before calculating the factorial.
//
//    Input         : iNo
//
//    Output        : Input 5  -> 120 (5 * 4 * 3 * 2 * 1)
//                    Input -5 -> 120 (5 * 4 * 3 * 2 * 1)
//                    Input 4  -> 24 (4 * 3 * 2 * 1)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return EXIT_SUCCESS;
}