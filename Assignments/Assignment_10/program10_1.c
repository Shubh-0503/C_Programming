#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fNo)
{
    float PI = 3.14f;
    double dArea = 0.0;

    dArea = PI * (fNo * fNo);

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius: ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Even Factorial of number is %lf",dRet);
    return EXIT_SUCCESS;

}