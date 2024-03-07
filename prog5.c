#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter any single character to know whether it is uppercase, lowercase, digit or any other character.\n");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The given character is Uppercase.\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The given character is Lowercase.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The given character is Digit.\n");
    }
     else
    {
        printf("The given character is other character.\n");
    }
    return 0;
}
