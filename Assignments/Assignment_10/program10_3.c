#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;
    

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Distance: ");
    scanf("%d",&iValue);

    

    iRet = KMtoMeter(iValue);

    printf("KM to Meter  is:  %d",iRet);
    return EXIT_SUCCESS;

}