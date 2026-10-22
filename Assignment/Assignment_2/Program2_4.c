#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : To Display first number in second number of times
//    Description :  Accept two numbers from user and display first number in second number of times 
//    Input :  iValue , iCount
//    Output :   eg 12, 5
//                  12 12 12 12 12
//    Author :  Siddharth Santosh Malakar
//    Date :  22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    printf("Enter Frequency:\n");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return EXIT_SUCCESS;
}
