#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckZero
//    Description   : Accepts an integer from the user and checks whether the given number contains zero or not.
//                    If the number contains at least one zero, it displays a zero-present message; otherwise,
//                    it displays a zero-absent message.
//
//    Input         : iNo
//
//    Output        : Input 22395 -> There is no zero
//                    Input 1018  -> It contains zero
//                    Input 9000  -> It contains zero
//                    Input 10687 -> It contains zero
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-04
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = TRUE;
            break;
        }
        else
        {
            bFlag = FALSE;
        }
        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{       
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return EXIT_SUCCESS;
}