#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;
    int i, j;
    
    //We can only find the sum of the right diagonals of a SQUARE matrix.
    
    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix after reading the dimensions, error if declare before input rows, cols
    int matrix[rows][cols];

    // Input the elements
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element - [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    
    //print the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Check if the user input square matrix, find the sum of right diagonals
    if (rows == cols) {
        for (i = 0; i < rows; i++) {
            sum += matrix[i][i];
        }
        printf("Addition of the right Diagonal elements is: %d\n", sum);
    } 
    else {
        printf("The matrix is not square, so the right diagonal sum cannot be calculated.\n");
    }

    return 0;
}