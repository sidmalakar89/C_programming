#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : is_triangle_valid
//    Description   : Accepts three integer values representing the lengths of the sides of a triangle
//                    and determines whether they can form a valid triangle.
//    Input         : iSide1, iSide2, iSide3
//    Output        : Input 3 4 5 -> Valid Triangle
//                    Input 1 2 3 -> Invalid Triangle
//                    Input 0 4 5 -> Invalid Triangle
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 > 1) && (iSide2 > 1) && (iSide3 > 1))
    {
        if(((iSide1 + iSide2) >= iSide3))
        {
            printf("It is Valid Triangle \n");
        }
        else if(((iSide2 + iSide3) >= iSide1))
        {
            printf("It is Valid Triangle \n");
        }
        else if(((iSide1 + iSide3) >= iSide2))
        {
            printf("It is Valid Triangle \n");
        }
        else
        {
            printf("Invalid Triangle \n");
        }
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter side1 :\n");
    scanf("%d", &iSide1);

    printf("Enter side1 :\n");
    scanf("%d", &iSide2);

    printf("Enter side1 :\n");
    scanf("%d", &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}