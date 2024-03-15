#include<stdio.h>
#include<string.h>

int main()
{
	const char* arr[] = {"Sunbeam", "Pune", "Sunbeam", "DESD", "Hinjewadi", "Pune"};
	int length = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < length; i++)
	{
		for (int j = i+1; j < length; j++)
		{
			if (strcmp (arr[i],arr[j]) == 0)
			{
				printf("arr[%d] = %s\n",i, arr[i]);
			}
		}
	}

	return 0;
}
