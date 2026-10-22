#include<stdio.h>
#include<stdlib.h>

void checkNumber(int iNo1, int iNo2, int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3 ))
    {
        printf("Grater %d \n",iNo1);
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        printf("Grater %d \n",iNo2);
    }
    else
    {
        printf("Grater %d\n",iNo3);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter the first Number : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);


    checkNumber(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;

}
