#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : Pattern
//    Description   : Accepts the number of rows and columns from the user and displays a right-aligned
//                    triangular pattern of consecutive column numbers, starting from the diagonal element.
//
//    Input         : iRow, iCol
//
//    Output        : Input iRow = 4 iCol = 4
//                    1   2   3   4
//                        2   3   4
//                            3   4
//                                4
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-11-13
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    int iNo = 1;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        iNo = iCnt;
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt <= jCnt)
            {
                printf("%d\t", iNo);
                iNo++;
            }
            else
            {
                printf("\t");
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

    printf("Enter number of rows :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}