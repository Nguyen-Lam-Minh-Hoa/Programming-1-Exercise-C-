// 7) Write a C program to add two matrices M by N
#include <stdio.h>

int main()
{
    int m, n, i, j;
    
    printf("Enter the number of rows and columns:\n");
    scanf("%d %d", &m, &n);
    
    int matrix1[m][n], matrix2[m][n], result[m][n];
    
    printf("Enter elements of matrix M:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    
    printf("Enter elements of matrix N:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    
    // Adding the matrices
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    
    
    printf("Sum of the matrices:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
