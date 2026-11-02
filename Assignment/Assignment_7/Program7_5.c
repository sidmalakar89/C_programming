#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : MultipleDisplay
//    Description   : Accepts an integer from the user and displays its first five multiples.
//
//    Input         : iNo
//
//    Output        : Input 4 -> 4  8  12  16  20
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-02
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("%d\t", iMulti);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}