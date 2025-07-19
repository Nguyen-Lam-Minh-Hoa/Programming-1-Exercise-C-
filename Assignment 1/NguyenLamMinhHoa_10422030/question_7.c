/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>  // For square root function

// performing addition
void addition() {
    double a, b;
    printf("Enter two numbers to add: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2f + %.2f = %.2f\n", a, b, a + b);
}

// performing subtraction
void subtraction() {
    double a, b;
    printf("Enter two numbers to subtract: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2f - %.2f = %.2f\n", a, b, a - b);
}

// performing multiplication
void multiplication() {
    double a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%lf %lf", &a, &b);
    printf("Result: %.2f * %.2f = %.2f\n", a, b, a * b);
}

// performing division
void division() {
    double a, b;
    printf("Enter two numbers to divide (numerator and denominator): ");
    scanf("%lf %lf", &a, &b);
    if (b != 0) {
        printf("Result: %.2f / %.2f = %.2f\n", a, b, a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

// performing squareRoot
void squareRoot() {
    double a;
    printf("Enter a number to find its square root: ");
    scanf("%lf", &a);
    if (a >= 0) {
        printf("Result: Square root of %.2f is %.2f\n", a, sqrt(a));
    } else {
        printf("Error: Square root of a negative number is not allowed.\n");
    }
}

int main() {
    int choice;
    
    do {
        // Display the menu for user to choose
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square Root\n");
        printf("6. Exit\n");
        printf("Choose an operation (1-6): ");
        scanf("%d", &choice);

        // Perform the chosen operation
        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                squareRoot();
                break;
            case 6:
                printf("Exiting calculator.\n");
                break;
            default:
                printf("Invalid choice. Please choose a number between 1 and 6.\n");
        }
    } while (choice != 6);  // Exit the loop when the user chooses to exit

    return 0;
}