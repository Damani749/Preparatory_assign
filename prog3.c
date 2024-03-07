#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    printf("Enter the number upto which you want fibonaccci sequence.\n");
    scanf("%d", &num);
    int a = 0, b = 1;
    int total = 0;
    if (num >= 3)
    {
        for (int i = 0; i <= num - 2 ; i++)
        {
           total = a + b;
           a = b;
           b = total;
        }
    }
    else if(num > 0)
    {
        printf("The fibonacci series upto %d place is %d\n", num, 1);
        return 0;
    }
        else 
    {
        printf("The fibonacci series upto given digit is not possible.\n"); 
        return 0;
    }
        printf("The fibonacci of %d is %d\n", num, total);

    return 0;
}
