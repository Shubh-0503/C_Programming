#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)  // Updation for negative number
    {
        iNo = -iNo;

    }
    

    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;

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