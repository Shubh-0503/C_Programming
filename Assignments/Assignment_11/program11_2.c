#include<stdio.h>
#include<stdlib.h>

int RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <=iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    else
    {
        printf("Invalid range");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 =0;

    printf("Enter the first Number:");
    scanf("%d",&iValue1);

    
    printf("Enter the Secound Number:");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return EXIT_SUCCESS;
    
} 