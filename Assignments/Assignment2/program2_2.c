#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{

    if (iNo < 0)  // Updation for negative number
    {
        iNo = -iNo;

    }
    

    while(iNo > 0)
    {
        printf("*");
        iNo--;

    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    Display(iValue);


    return EXIT_SUCCESS;

}