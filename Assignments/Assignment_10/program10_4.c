#include<stdio.h>
#include<stdlib.h>

double RectArea(float fTemp)
{
    double dCelsius= 0.0;

     dCelsius = (fTemp - 32) * (5.0/9.0);
    return dCelsius;
}

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit ");
    scanf("%f",&fValue1);

    

    dRet = RectArea(fValue1);

    printf("temperature in Celsiud :%f",dRet);
    return EXIT_SUCCESS;

}