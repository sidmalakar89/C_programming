#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : FactRev
//    Description   : Accepts an integer from the user and displays all factors of the given number in decreasing
//                    order.
//
//    Input         : iNo
//
//    Output        : Input 12 -> 6 4 3 2 1
//                    Input 13 -> 1
//                    Input 10 -> 5 2 1
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-07
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iCount = iNo/2;
    while(iCount >= 1)
    {
        if((iNo % iCount) == 0)
        {
            printf("%d\t",iCount);
        }

        iCount--;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return EXIT_SUCCESS;
}