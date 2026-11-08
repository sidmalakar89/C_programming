#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a pattern of numbers
//                    and asterisks, where the boundary elements are column numbers and the inner elements
//                    are asterisks.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 4 iCol = 4
//                    1   2   3   4
//                    1   *   *   4
//                    1   *   *   4
//                    1   2   3   4
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-08
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 1;

    iNo = 1;
    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1, iNo = 1; jCnt <= iCol; jCnt++, iNo++)
        {
            if((iCnt > 1) && (iCnt < iRow) && (jCnt > 1) && (jCnt < iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t", iNo);
            }
        }
        printf("\n\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter number of columns:\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}