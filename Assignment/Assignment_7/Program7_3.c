#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : DisplayLine
//    Description   : Accepts an integer from the user and displays the number line from its negative value
//                    to its positive value, including zero.
//
//    Input         : iNo
//
//    Output        : Input 4 -> -4 -3 -2 -1 0 1 2 3 4
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayLine(int iNo)
{
    int iCnt = 0;  

    for(iCnt = -iNo; iCnt <= +iNo; iCnt++) // here we starting counting from where the user enter the number 
    {
        printf("%d\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    DisplayLine(iValue);

    return EXIT_SUCCESS;
}