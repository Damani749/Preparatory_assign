#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, count, result;
    int binaryNumber[32], i = 0;
    printf("Enter the number whose conversion you want to print.\n");
    scanf("%d", &num);

    printf("The given number in decimal is %d\n", num);
    printf("The given number after converted in Octal is %o\n", num);
    printf("The given number after converted in hexadecimal is %x\n",num);

    while (num > 0) 
    {
        binaryNumber[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("The given number after converted in binary is ");
    for (int j = i - 1; j >= 0; j--) 
	{
        printf("%d", binaryNumber[j]);
    }
    printf("\n");
    return 0;
}
