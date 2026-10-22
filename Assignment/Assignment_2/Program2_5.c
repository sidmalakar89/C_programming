#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : check whether number is even or odd
//    Description :  accept numberr from user and chek whether number is even or odd
//    Input :   iValue, bRet 
//    Output :   eg 25
//                  It is odd number 
//                  24
//                  Is is even number
//    Author :  Siddharth Santosh Malakar
//    Date :  22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if(bRet == TRUE)
    {
        printf("%d is Even Number\n", iValue);
    }
    else
    {
        printf("%d is Odd Number\n", iValue);
    }

    return EXIT_SUCCESS;
}
