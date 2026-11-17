#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Pattern
//      Input         : integer, integer
//      OUTPUT        : 
//      DESCRIPTION   : Print Pattern  
//      Date          : 12/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 0;

    for(i = 1, iCount = 1; i <= iRow; i++)
    {
       for(j = 1; j <= iCol; j++)
       {
        printf("%d\t", iCount);
        iCount++;
        if(iCount == 10)
        {
            iCount = 1;
        }
       } 
       printf("\n \n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows and cloumns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);


    return EXIT_SUCCESS;

}