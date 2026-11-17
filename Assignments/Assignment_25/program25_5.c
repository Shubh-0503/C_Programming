#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////
//  
//      Function Name : Strtogglex
//      Input         : character
//      OUTPUT        : 
//      DESCRIPTION   : Display Exam Time table  
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////

void DisplaySchedule(char ch)
{
    switch (ch)
    {
        case 'A':
        case 'a':
        {
            printf("Your Exam at 7 Am");
            break;

        }
        case 'B':
        case 'b':
        {
            printf("Your Exam at 8:30 Am");
            break;
            
        }
        case 'C':
        case 'c':
        {
            printf("Your Exam at 9:20 Am");
            break;
            
        }
        case 'D':
        case 'd':
        {
            printf("Your Exam at 10:30 Am");
            break;
            
        }
        default:
        {
            printf("plz enter valid data");
        }
    }

}

int main()
{
    char cValue = '\0';

    printf("enter the your Division:");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return EXIT_SUCCESS;
}