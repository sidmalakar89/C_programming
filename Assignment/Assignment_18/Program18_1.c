#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a pattern of asterisks
//                    and hash symbols, where the number of asterisks increases in each row.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 4 iCol = 4
//                    *   #   #   #
//                    *   *   #   #
//                    *   *   *   #
//                    *   *   *   *
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-08
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    if(iRow != iCol)
    {
        printf("Invalid input, Enter the same number\n");
        return;
    }

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt < jCnt)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
