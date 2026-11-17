#include<stdio.h>
#include<stdlib.h>


//////////////////////////////////////////////////////////////
//  
//      Function Name : CountCapital
//      Input         : String
//      OUTPUT        : 
//      DESCRIPTION   : inside string count Capital Characters. 
//      Date          : 16/11/2026
//      Author        : Shubham Rambhau Bhagde
//
//
//////////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;
    char i = '\0';
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            iCnt++;
        }
        i++;

    }
    return iCnt;

}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);
    
    iRet = CountCapital(arr);

    printf("Capital characters :%d",iRet);
    
    return EXIT_SUCCESS;
}