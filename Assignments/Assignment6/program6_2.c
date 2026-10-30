#include<stdio.h>
#include<stdlib.h>

void checkAdmision(float fMarks, int iAge)
{
    if((fMarks > 60) && (iAge >= 18))
    {
        printf("Eligible for Admission");
    }
    else
    {
        printf("Not Eligible");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age ");
    scanf("%f %d",&fMarks, &iAge);

    checkAdmision(fMarks,iAge);

    return EXIT_SUCCESS;
}