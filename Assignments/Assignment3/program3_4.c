#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cChar)
{
   if(cChar =='A')
   {
    printf("a");
   }
   else if(cChar =='a')
   {
    printf("A");
   }
    
}
int main()
{
    char cValue = '\0';

    printf("Enter the Number:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);


    return EXIT_SUCCESS;

}