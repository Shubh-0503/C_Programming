#include<stdio.h>
#include<stdlib.h>

double RectArea(float fWidth, float fHight)
{
    double dArea = 0.0;

    dArea =(fWidth * fHight);

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter the Width: ");
    scanf("%f",&fValue1);

    printf("Enter the Hight: ");
    scanf("%f",&fValue2);


    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangal is:  %lf",dRet);
    return EXIT_SUCCESS;

}