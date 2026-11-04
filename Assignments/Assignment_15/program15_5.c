#include<stdio.h>
#include<stdlib.h>
float Precentage(int iTotalMarks, int iObtainedMarks)
{
    float iAns = 0.0f;
    if(iTotalMarks == 0)
    {
        return 0.0f;
    }
    else if(iObtainedMarks == 0)
    {
        return 0.0f;
    }
    iAns = (iObtainedMarks * 100.0f) / iTotalMarks;

    return iAns;
}
 
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float iRet = 0.0f;

    printf("Please enter total Marks: ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks:");
    scanf("%d",&iValue2);  
    
    
    iRet = Precentage(iValue1, iValue2);

    printf("Percentage is: %.2f", iRet);

    return EXIT_SUCCESS;
}