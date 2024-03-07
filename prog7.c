#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    if (argc != 2)
	{
		printf("Usage: %s <number>\n",argv[0]);
		return 1;
	}

	int num = atoi(argv[1]);
    if (num <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Multiplication table for %d:\n", num);
    
    for (int count = 1; count <= 10; count++) 
	{
        printf("%d x %2d = %2d\n", num, count, num * count);
    }
    return 0;
}

