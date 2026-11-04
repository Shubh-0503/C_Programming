#include<stdio.h>
#include<stdlib.h>

 int Mulatiply(int iNo1, int iNo2, int iNo3)
 {
    int iAns = 0;

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        iAns  = 0;
        return iAns;
    }
    
    if(iNo1 <= 0)
    {
        iNo1 = 1;
    }
    if(iNo2 <= 0)
    {
        iNo2 = 1;

    }
    if(iNo3 <= 0)
    {
        iNo3 = 1;
    }
    

    iAns = iNo1 * iNo2 * iNo3;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;



    printf("Enter First Number: ");
    scanf("%d",&iValue1);

    printf("Enter Second Number: ");
    scanf("%d",&iValue2);

    printf("Enter Third Number: ");
    scanf("%d",&iValue3);

    iRet = Mulatiply(iValue1, iValue2, iValue3);

    printf("Product is: %d", iRet);

    return EXIT_SUCCESS;
}