#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CountOdd
//    Description   : Accepts an integer from the user and counts the frequency of odd digits (1, 3, 5, 7, 9)
//                    present in the given number. If the number is negative, its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2395  -> 3
//                    Input 1018  -> 2
//                    Input -1018 -> 2
//                    Input 8462  -> 0
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{
    int iDigit =0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo= -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    } 

    return iCount;
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("Count of Odd digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}