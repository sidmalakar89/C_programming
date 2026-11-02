#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : FactorialDiff
//    Description   : Accepts an integer from the user and calculates the difference between its even factorial
//                    and odd factorial by subtracting the odd factorial from the even factorial.
//
//    Input         : iNo
//
//    Output        : Input 5  -> -7 (8 - 15)
//                    Input -5 -> -7 (8 - 15)
//                    Input 10 -> 2895 (3840 - 945)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)  // here we have two conditions first is to check Even and second is for 0dd 
        {
            iEven = iEven * iCnt;
        }
        else if(iCnt % 2 != 0)
        {
            iOdd = iOdd * iCnt;
        }
    }
 
    return iEven - iOdd; // when we return the value return with the subtraction form

}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is %d\n", iRet);

    return EXIT_SUCCESS;
}