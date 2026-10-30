#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0 


BOOL CheckVowel(char cChar)
{
    char arr[] = {'a','e','i','o','u',
          'A','E','I','O','U'};
    int iCnt = 0;

    for(iCnt = 0; iCnt < 10; iCnt++)
    {
        if(cChar == arr[iCnt])
        {
            return TRUE;
        }
    
     }
      return FALSE;

    

   
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    

    printf("Enter the Charcter:");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a vowel");

    }
    else
    {
        printf("It is not vowel");
    }


    return EXIT_SUCCESS;

}