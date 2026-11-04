#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : MultDigits
//    Description   : Accepts an integer from the user and calculates the multiplication of all digits present
//                    in the given number. If the number is negative, its absolute value is considered.
//
//    Input         : iNo
//
//    Output        : Input 2395   -> 270
//                    Input 1018   -> 8
//                    Input 9440   -> 0
//                    Input 922432 -> 864
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iMulti = iMulti * iDigit;
        iCount++;

        iNo = iNo / 10;
    }

    return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = MultDigit(iValue);
    
    printf("Multiplication of digits are : %d\n", iRet);

    return EXIT_SUCCESS;
}