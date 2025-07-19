#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;
    int i, j;
    
    printf("We only find the sum of the right diagonals of a SQUARE matrix.\n");
    
    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare the matrix after reading the dimensions
    int matrix[rows][cols];

    // Input the elements
    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the user input square matrix, find the sum of right diagonals
    if (rows == cols) {
        for (i = 0; i < rows; i++) {
            sum += matrix[i][i];
        }
        printf("The sum of the right diagonal elements is: %d\n", sum);
    } else {
        printf("The matrix is not square, so the right diagonal sum cannot be calculated.\n");
    }

    return 0;
}