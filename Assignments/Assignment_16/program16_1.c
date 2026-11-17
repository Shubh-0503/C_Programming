#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Pattern
//      Input         : integer, integer
//      OUTPUT        : 
//      DESCRIPTION   : Print Pattern  
//      Date          : 07/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//
//
//////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1,  ch = 'A'; j <= iCol; j++, ch++)
        {
            printf("%c\t",ch);
        }
            printf("\n\n");

    }

}
int main()
{

    int iVlaude1 = 0, iVlaude2 = 0;

    printf("Enter number of Rows and Columns ");
    scanf("%d %d",&iVlaude1,&iVlaude2);

    Pattern(iVlaude1,iVlaude2);

    return EXIT_SUCCESS;

}