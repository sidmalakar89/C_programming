#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : accept number and print that number of even numbers on screen
//    Description : acccept a number from user and print that number of even numbers on screen
//    Input :  iValue
//    Output :   eg 7
//                  2 4 6 8 10 12
//    Author :  Siddharth Santosh Malakar
//    Date :  22/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    // Logic

    int iCnt = 0;           // It is a counter of loop
    int iCount =0;          // It is used to count how many numbers are print 

    iCnt = 1;              
    while(iCnt >= 1)          // here means if counter is greater than 1 
    {
        if(iCnt % 2 == 0)      
        {
            printf("%d\t",iCnt);
            iCount++;
        }
        iCnt++;
        if(iCount == iNo)
        {
            printf("\n");
            return;
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
