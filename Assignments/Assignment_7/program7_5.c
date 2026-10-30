#include<stdio.h>
#include<stdlib.h>

void MultipalDisplay(int iNo)
{
    int iCnt = 0, iMul = 0;
    if(iNo > 0)
    {
        iNo = iNo;
    }
    for(iCnt = 1; iCnt <=5; iCnt++)
    {
        iMul = iNo * iCnt;
        printf("%d\t",iMul);

        

    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    MultipalDisplay(iValue);

    return EXIT_SUCCESS;

}