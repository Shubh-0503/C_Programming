#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0, N, iCount = 0;
    if(iNo <= 0 )
    {
        return;

    }

    for(iCnt = 1; iCnt <= N; iCnt++ )
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
            iCount++;
        }
        if(iCount >= iNo)
        {
            return;
        }
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter the Number:");
    scanf("%d",&iValue);

    PrintEven(iValue);


    return EXIT_SUCCESS;

}