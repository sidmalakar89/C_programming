#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define true 1
#define false 0
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : check the number is divisible by 5 
//    Description :  It is used to accept one number from user and check it is divisible by 5 or not
//    Input :  int 
//    Output :  TRUE OR FALSE
//    Author :  Siddharth Santosh Malakar
//    Date :  19/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
BOOL CheckEven(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5 \n");
    }
    else
    {
        printf("Not Divisible by 5 \n");
    }

    return EXIT_SUCCESS;
}
