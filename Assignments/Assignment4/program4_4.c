#include<stdio.h>
#include<stdlib.h>

void chackVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf(" Invalid Age \n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting \n");
    }
    else
    {
        printf("Not Eligible for voting \n");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter The Age : ");
    scanf("%d",&iAge);

    chackVotingEligibility(iAge);

    return EXIT_SUCCESS;

}
