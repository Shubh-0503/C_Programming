#include <stdio.h>
#include <stdlib.h>

void dispalyGrage(float fMarks)
{
    if (fMarks > 100)
    {
        printf("Invalid Marks...");
    }
    else if ((fMarks >= 90) && (fMarks <= 100))
    {
        printf("Grade A \n");
    }
    else if ((fMarks >= 75) && (fMarks <= 89))
    {
        printf("Grade B \n");
    }
    else if ((fMarks >= 60) && (fMarks <= 74))
    {
        printf("Grade C \n");
    }
    else if ((fMarks >= 40) && (fMarks <= 59))
    {
        printf("Grade D \n");
    }
    else 
    {
        printf("Fail \n");
    }
}
int main()
{
    float fMarks = 0.0f;

    printf("Enter The Marks : ");
    scanf("%f", &fMarks);

    dispalyGrage(fMarks);

    return EXIT_SUCCESS;
}
