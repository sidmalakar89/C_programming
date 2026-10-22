#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : to print Asterics * on console
//    Description :  It is used to accept one number from user and print * on console using while loop using updater
//    Input :  int 
//    Output :  * 
//    Author :  Siddharth Santosh Malakar
//    Date :  19/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    iCnt = iNo;
    while(iCnt >= 1)
    {
        printf("*\n");
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
