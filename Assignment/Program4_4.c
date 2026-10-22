#include <stdio.h>
#include <stdlib.h>
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//    Function Name : CheckVotingEligibility
//    Description   : Accepts a person's age, validates the input, and determines whether the person is eligible
//                    to vote based on the minimum voting age.
//
//    Input         : iAge
//
//    Output        : Input 21 -> Eligible for Voting
//                    Input 16 -> Not Eligible for Voting
//                    Input -5 -> Invalid Age
//
//    Author        : Siddharth Santosh Malakar
//    Date          : 2026-10-22
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if (iAge >= 18)
    {
        printf("You are eligible for Voting \n");
    }
    else if(iAge < 0)
    {
       printf("Invalid Age \n");
    }
    else
    {
        printf("You are not eligible for Voting \n");
    }
}

int main()
{
    int iNo = 0;

    printf("Enter your age :\n");
    scanf("%d", &iNo);

    CheckVotingEligibility(iNo);

    return EXIT_SUCCESS;
}