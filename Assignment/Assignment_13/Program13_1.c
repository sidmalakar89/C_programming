#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CountEven
//    Description   : Accepts an integer from the user and counts the frequency of even digits (0, 2, 4, 6, 8)
//                    present in the given number. If the number is negative, its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2395  -> 1
//                    Input 1018  -> 2
//                    Input -1018 -> 2
//                    Input 8462  -> 4
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
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

    printf("Enter number:\n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("Count of even digits is : %d\n", iRet);

    return EXIT_SUCCESS;
}
