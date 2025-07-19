#include <stdio.h>

// Function to calculate GPA and classify grade
void calculateGPA() {
    float math, physics, english, gpa;

    // Read grades from user input
    printf("Enter Math grade (0-100): ");
    scanf("%f", &math); // math grade
    printf("Enter Physics grade (0-100): ");
    scanf("%f", &physics); // physics grade
    printf("Enter English grade (0-100): ");
    scanf("%f", &english); // english grade

    // Calculate GPA
    gpa = (math * 2 + physics + english) / 4;

    // Print GPA
    printf("GPA: %.2f\n", gpa);

    // Classify the grade based on GPA
    if (gpa >= 90) {
        printf("Classification: Excellent\n");
    } else if (gpa >= 80 && gpa <90) {
        printf("Classification: Good\n");
    } else if (gpa >= 70 && gpa <80) {
        printf("Classification: Fair\n");
    } else if (gpa >= 60 && gpa <70) {
        printf("Classification: Average\n");
    } else if (gpa >= 50 && gpa <70) {
        printf("Classification: Weak\n");
    } else if (gpa < 50) {
        printf("Classification: Fail\n");
    } 
}

int main() {
    char continueChoice;

    do {
        // Call function to calculate GPA and classify grade
        calculateGPA();

        // Ask if the user wants to continue or exit
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &continueChoice);  // the space before %c to catch newline

    } while (continueChoice == 'Y' || continueChoice == 'y');

    // Print exit message
    printf("Exit program...\n");

    return 0;
}