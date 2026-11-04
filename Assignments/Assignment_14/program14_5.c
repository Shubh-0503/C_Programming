#include<stdio.h>
#include<stdlib.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact =0;

    for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSumFact = iSumFact + iCnt;
        }

        
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;

        }
    }
    return iSumFact - iSumNonFact;
        
    
    return iSumFact - iSumNonFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("Difference between Sum of Factors and Sum of Non-Factors is : %d\n",iRet);


    return EXIT_SUCCESS;

}