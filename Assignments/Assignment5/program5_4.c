#include<stdio.h>
#include<stdlib.h>

void checkDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && (iValue % 5) == 0)
    {
        printf("Divisible by Both");
    }
    else if( (iValue % 5) == 0)
    {
        printf("Divisible by 5 Only \n");
    }
    else if( (iValue % 3) == 0)
    {
        printf("Divisible by 3 Only \n");
    }
    else
    {
        printf("Not Divisible by Either");

    }
}
int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    checkDivisibility(iValue);

    return EXIT_SUCCESS;

}
