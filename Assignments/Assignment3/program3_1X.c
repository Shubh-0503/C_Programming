#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    int iCnt = 0, iCount = 0;
    if(iNo <= 0 )
    {
        return;

    }

    for(iCnt = 1; iCount <= iNo ; iCnt++ )
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
            iCount++;
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