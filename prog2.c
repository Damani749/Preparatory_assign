#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,fact =1;
    printf("Enter the number whose factorial you want.\n");
    scanf("%d", &num);
    
    if (num >= 0)
    {
        for (int i = 1; i <= num; i++)
        {
           fact = fact * i;
        }
    }

    else 
    {
        printf("The factorial of given number is not possible.\n");
        return 0;
    }
        printf("The factorial of %d is %d.\n", num, fact);

    return 0;
}
