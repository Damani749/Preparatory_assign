#include <stdio.h>
#include <string.h>

int main() 
{
	char str[100];
	int count;
	int counts[128] = {0};
	printf("Enter a string: ");
	fgets(str, sizeof(str), stdin);

	if (str[strlen(str) - 1] == '\n') 
	{
		str[strlen(str) - 1] = '\0';
	}

	for (int i = 0; i < strlen(str); i++) 
	{
		counts[(int)str[i]]++; // Increment count for each character
	}

	printf("Occurrence of each character:\n");
	for (int i = 0; i < 128; i++) 
	{
		if (counts[i] > 0) 
		{
			printf("'%c' : %d\n", (char)i, counts[i]); // Print count of each character
		}
	}
	return 0;
}
