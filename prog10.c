#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50

// Comparison function for qsort
int compareNames(const void *a, const void *b) 
{
    return strcmp((const char*)a, (const char*)b);
}

int main() 
{
    char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
    int numStudents = 0;

    printf("Enter at most 10 names of students (one per line, max 50 characters each):\n");

    // Read names from user input
    while (numStudents < MAX_STUDENTS && fgets(nameOfStudents[numStudents], MAX_NAME_LENGTH, stdin)) 
	{
        nameOfStudents[numStudents][strcspn(nameOfStudents[numStudents], "\n")] = '\0'; // Remove newline character
        numStudents++;
    }

    // Sort the array of names using qsort
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareNames);

    printf("\nSorted names of students:\n");
    for (int i = 0; i < numStudents; i++) 
	{
        printf("%s\n", nameOfStudents[i]);
    }

    return 0;
}
