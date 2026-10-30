#include<stdio.h>
#include<stdlib.h>

void checkDivisibility(int iYear)
{
    if(iYear % 400 == 0 || (iYear % 4 == 0 && (iYear % 100) != 0))
    {
        printf("Leap Year \n");
    }
    else
    {
        printf("Not a leap year \n");
    }
}
int main()
{
    int iYear = 0;

    printf("Enter The Year : ");
    scanf("%d",&iYear);

    checkDivisibility(iYear);

    return EXIT_SUCCESS;

}
