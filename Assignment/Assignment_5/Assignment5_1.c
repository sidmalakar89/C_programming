#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : FindGreatestNumber
//    Description   : Accepts three integers from the user and determines the greatest value among them.
//                    Handles cases where two or more numbers have the same greatest value.
//
//    Input         : iFirst, iSecond, iThird
//
//    Output        : Input 10 50 30 -> 50 is the Greatest Number
//                    Input 40 40 20 -> 40 is the Greatest Number
//                    Input 15 15 15 -> All Numbers Are Equal (Greatest Value = 15)
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is greatest number \n", iFirst);
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is greatest number \n",iSecond);
    }
    else if(iThird > iSecond && iThird > iFirst)
    {
        printf("%d is greatest number \n", iThird);
    }
    else if(iFirst >= iThird)
    {
        printf("%d is greatest number\n", iFirst);
    }
    else if(iSecond >= iFirst)
    {
        printf("%d is greatest number \n", iSecond);
    }
    else if(iThird >= iSecond)
    {
        printf("%d is greatest number \n", iThird);
    }
    else
    {
        printf("All are equal numbers \n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter First Number : \n");
    scanf("%d", &iValue1);

    printf("Enter Second Number : \n");
    scanf("%d", &iValue2);

    printf("Enter third Number : \n");
    scanf("%d", &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}
