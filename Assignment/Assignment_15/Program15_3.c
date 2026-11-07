#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckEqual
//    Description   : Accepts two integers from the user and checks whether both the given numbers are equal
//                    or not.
//
//    Input         : iNo1, iNo2
//
//    Output        : Input 10 10  -> Equal
//                    Input 10 12  -> Not Equal
//                    Input 10 -10 -> Not Equal
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1;
#define FALSE 0;

BOOL CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second number :\n");
    scanf("%d", &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == 1)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}