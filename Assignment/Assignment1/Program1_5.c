#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : to print Asterics * on console
//    Description :  It is used to accept one number from user and print * on console
//    Input :  int 
//    Output :  * 
//    Author :  Siddharth Santosh Malakar
//    Date :  19/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}
