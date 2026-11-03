#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int RangeSum(int iStart, int iEnd)
{
    bool bFlag = false;
    int iCnt = 0, iSum = 0;
    

    if((iStart >= 0) && (iEnd >= 0) && (iStart <= iEnd))
     {
        for(iCnt = iStart; iCnt <=iEnd; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }
     }
     else
     {
        bFlag = true;
        return bFlag;
     }
    return iSum;   
       
}

int main()
{
    int iValue1 = 0, iValue2 =0, iRet = 0;

    printf("Enter the first Number:");
    scanf("%d",&iValue1);

    
    printf("Enter the Secound Number:");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet == true)
    {
        printf("Invalid Input");
    }
    else
    {
        printf("Addition is %d",iRet);
    }

    return EXIT_SUCCESS;
    
} 