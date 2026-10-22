#include<stdio.h>
#include<stdlib.h>

void checkEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
   
}
int main()
{
    int iValue = 0;

    printf("Enter The Number : ");
    scanf("%d",&iValue);

    checkEvenOdd(iValue);

    return EXIT_SUCCESS;

}
