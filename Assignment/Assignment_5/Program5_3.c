#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CalculateStudentGrade
//    Description   : Accepts a student's marks out of 100, validates the input, and determines the student's
//                    grade according to the specified grading criteria.
//
//    Input         : fMarks
//
//    Output        : Input 85  -> Grade B
//                    Input 90  -> Grade A
//                    Input 35  -> Fail
//                    Input 105 -> Invalid Marks
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayGrade(float FMarks)
{
    if(FMarks >= 90 && FMarks <= 100)
    {
        printf("Grade A\n");
    }
    else if(FMarks >=75 && FMarks <= 89)
    {   
        printf("Grade B\n");
    }
    else if(FMarks >= 60 && FMarks <= 74)
    {
        printf("Grade C\n");
    }
    else if(FMarks >= 40 && FMarks <= 59)
    {
        printf("Grade D\n");
    }
    else if(FMarks < 40 && FMarks >= 1)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks :\n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);
    
    return EXIT_SUCCESS;
}