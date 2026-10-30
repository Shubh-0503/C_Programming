#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt = 0, iNew = 0;
    if(iNo > 0)
    {
        iNew = -iNo;
    }
    for(iCnt = iNew; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
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