#include<stdio.h>
#include<stdlib.h>

double SqureMeter(int iTemp)
{
    double dSMeter= 0.0;

     dSMeter = (iTemp * 0.0929);
    return dSMeter;
}

int main()
{
    int iValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit ");
    scanf("%d",&iValue1);

    

    dRet = SqureMeter(iValue1);

    printf("Area into Squre meter is :%f",dRet);
    return EXIT_SUCCESS;

}