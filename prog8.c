#include<stdio.h>
#include<stdlib.h>

struct Student 
{
    char name[40];    
    char rollNo[10];  
    int totalMarks;   
};

int main() 
{
    struct Student student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter student's roll number: ");
    scanf("%s", student.rollNo);

    printf("Enter student's total marks: ");
    scanf("%d", &student.totalMarks);

    printf("\nStudent's Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks: %d\n", student.totalMarks);

    return 0;
}
