#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') 
	{
        str[strlen(str) - 1] = '\0';
    }

    // Reverse the string
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
