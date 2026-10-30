#include<stdio.h>
#include<stdlib.h>

void checkNumber(int iNo)
{
    if(iNo == 0)
    {
        printf("Number is zero\n");
    }
    else if(iNo > 0)
    {
        printf("Number is positiv\n");
    }
    else
    {
        printf("Number is Negative\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    checkNumber(iValue);

    return EXIT_SUCCESS;

}
