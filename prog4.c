#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter the marks of a student of all five subjects out of 100.\n");
    float arr[5];
    float result, sum = 0;
    for (int i = 0; i < 5; i ++)
    {
        scanf("%f",&arr[i]);
    }

    printf("The marks entered of the student are: "); 
    for (int i = 0; i < 5; i ++)
    {
        printf("%.2f\t",arr[i]);
    }

    for (int i = 0; i < 5; i ++)
    {
        sum = sum + arr[i];
        //printf("%.2f\n", sum);
    }

    result = sum/5.0;
    printf("\nYour percentage is %.2f\n", result);

    if (result >= 90) 
    {
        printf("Your grades are Excellent\n");
    } 
    else if (result >= 80) 
    {
        printf("Your Grade is A\n");
    } 
    else if (result >= 70) 
    {
        printf("Your Grade is B\n");
    } 
    else if (result >= 60) 
    {
        printf("Your Grade is C\n");
    } 
    else 
    {
        printf("Your Grade is F. You are failed.\n");
    }
    return 0;
}
