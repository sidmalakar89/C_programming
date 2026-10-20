///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//    Function Name : program to print 5 to 1 numbers on console
//    Description :  It is used to display the numbers fromm 5 to 1 on console
//    Input :  int, int
//    Output :  5 4 3 2 1
//    Author :  Siddharth Santosh Malakar
//    Date :  19/10/2026
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void Display()
{
    int iNo = 0;

    int iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
}
int main()
{
    Display ();

    return EXIT_SUCCESS;
}
