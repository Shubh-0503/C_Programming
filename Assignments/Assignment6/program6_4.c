#include<stdio.h>
#include<stdlib.h>

void checkAdmision(int iSide1, int iSide2, int iSide3)
{
    if((iSide1 < 0) || (iSide2 < 0) || (iSide3 <0))
    {
        printf("Invalid Triangle");
    }
    else if((iSide1 + iSide2) > iSide3)
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;


    printf("Enter the three Sides : ");
    scanf("%d %d %d",&iSide1, &iSide2, &iSide3);

    checkAdmision(iSide1,iSide2,iSide3);

    return EXIT_SUCCESS;
}