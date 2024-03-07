#include<stdio.h>

int main() 
{
    int n, m, p, i, j, k;

    printf("Enter the number of rows in the first matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns in the first matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in the second matrix: ");
    scanf("%d", &p);

    int mat1[10][10], mat2[10][10], result[10][10]; // Maximum size of matrix set to 10

    printf("Enter the elements of the first matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d", &mat1[i][j]);

    printf("Enter the elements of the second matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < p; j++)
            scanf("%d", &mat2[i][j]);

    // Perform matrix multiplication
    for(i = 0; i < n; i++) 
	{
        for(j = 0; j < p; j++) 
		{
            result[i][j] = 0;
            for(k = 0; k < m; k++) 
			{
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for(i = 0; i < n; i++) 
	{
        for(j = 0; j < p; j++) 
		{
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
