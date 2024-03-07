#include <stdio.h>
#include <string.h>

struct Employee 
{
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void initializeEmployee(struct Employee *emp, const char *firstName, const char *lastName, double monthlySalary) 
{
    strcpy(emp->firstName, firstName);
    strcpy(emp->lastName, lastName);
    emp->monthlySalary = monthlySalary;
}

void printEmployee(const struct Employee *emp) 
{
    printf("First Name: %s\n", emp->firstName);
    printf("Last Name: %s\n", emp->lastName);
    printf("Monthly Salary: %.2f\n", emp->monthlySalary);
}

void modifyEmployee(struct Employee *emp, const char *firstName, const char *lastName, double monthlySalary) 
{
    if (firstName != NULL) strcpy(emp->firstName, firstName);
    if (lastName != NULL) strcpy(emp->lastName, lastName);
    if (monthlySalary >= 0) emp->monthlySalary = monthlySalary;
}

int main() 
{
    struct Employee emp;
    initializeEmployee(&emp, "Ramya", "Damani", 30000.0);
    printf("Employee Details:\n");
    printEmployee(&emp);

    modifyEmployee(&emp, "Bharat", "Damani", 90000.0);
    printf("\nModified Employee Details:\n");
    printEmployee(&emp);
    return 0;
}
