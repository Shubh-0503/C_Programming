#include<stdio.h>
#include<stdlib.h>

void Display(int iNo1, int iNo2)
{

    int icnt = 0;
    
    if(iNo2 < 0)
    {
        iNo2 = - iNo2;

    }

    for(icnt = 1; icnt <= iNo2; icnt++)
    {
        printf("%d\t", iNo1);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the First Number: ");
    scanf("%d",&iValue1);

    printf("Enter the Second Number: ");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);


    return EXIT_SUCCESS;

}