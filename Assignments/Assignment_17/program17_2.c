#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Pattern
//      Input         : integer, integer
//      OUTPUT        : 
//      DESCRIPTION   : Print Pattern  
//      Date          : 15/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    
    int i = 0, j = 0, iCount = 1;

    for(i = 1; i <= iRow; i++)
    { 
        if(i % 2 != 0)
        {
            for(j = 1; j <= iCol + 1; j++)
            {
                printf("%d\t",j * 2);               

            }
        }
        else
        {
            for(j = 1; j <= iCol + 1; j++)
            {
                printf("%d\t",(j * 2)-1);
            }
        }
        printf("\n\n");       
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter the roes and columns :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1, iValue2);
    return EXIT_SUCCESS;

}