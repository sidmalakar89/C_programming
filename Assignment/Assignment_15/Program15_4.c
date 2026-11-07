#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Multiply
//    Description   : Accepts three integers from the user and calculates their multiplication.
//
//    Input         : iNo1, iNo2, iNo3
//
//    Output        : Input 5 4 7 -> 140
//                    Input 5 0 7 -> 35
//                    Input 5 0 0 -> 5
//                    Input 0 0 0 -> 0
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMultiply = 1;

    iMultiply = iNo1 * iNo2 * iNo3;
    
    if((iNo2 == 0) && (iNo3 == 0))
    {
        iMultiply = iNo1;
    }
    else if((iNo1 == 0) && (iNo2 == 0))
    {
        iMultiply = iNo3;
    }
    else if((iNo1 == 0) && (iNo3 == 0))
    {
        iMultiply = iNo2;
    }
    else if (iNo1 == 0)
    {
        iMultiply = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iMultiply = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iMultiply = iNo1 * iNo2;
    }
    
    return iMultiply;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 =0;
    int iRet = 0;

    printf("Enter First number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second number :\n");
    scanf("%d", &iValue2);

    printf("Enter Third number :\n");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication of 3 numbers is :%d\n", iRet);

    return EXIT_SUCCESS;
}