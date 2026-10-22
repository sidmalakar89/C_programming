#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : to print even factors of that number 
//    Description :  accept nummber from user and print even factors of that number
//    Input :  iValue
//    Output :  eg 36
//                 2 6 12 18
//    Author :  Siddharth Santosh Malakar
//    Date :  22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return EXIT_SUCCESS;
}
