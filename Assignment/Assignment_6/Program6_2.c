#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckAdmissionEligibility
//    Description   : Accepts a student's marks and age, validates the input values, and determines whether
//                    the student is eligible for admission based on the specified eligibility criteria.
//
//    Input         : fMarks, iAge
//
//    Output        : Input 75 18   -> Eligible for Admission
//                    Input 55 19   -> Not Eligible for Admission
//                    Input 80 16   -> Not Eligible for Admission
//                    Input 123 -18 -> Invalid Input
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckAdmission(float FMarks, int iAge)
{
    if((FMarks > 100) || (iAge < 0))
    {
        printf("Invalid Input please enter valid input\n");
    }
    else if((FMarks >= 60) && (iAge >= 17))
    {
        printf("You are Eligible for Admision \n");
    }
    else
    {
        printf("You are not ELigible for Admission \n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks of student :\n");
    scanf("%f", &fMarks);

    printf("Enter Age of student :\n");
    scanf("%d", &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}