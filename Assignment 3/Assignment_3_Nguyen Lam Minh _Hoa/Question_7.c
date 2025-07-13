#include <stdio.h>
#include <string.h>

// Define a structure for student information
struct Student {
    char name[50]; // Field to store the student's name
    int roll_number; // Field to store the roll number
    float marks; // Field to store the marks
};

// Define function 
void print_above_grade(struct Student students[], int count, float grade); 
struct Student find_top_student(struct Student students[], int count);

int main() {
    struct Student students[10]; //define variable array for structure
    float specified_grade; 
    
    // Input data for 10 students
    printf("Enter details of 10 students:\n");
    for (int i = 0; i < 10; i++) { //loop through array
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name); // Read string with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    //ask the user for the specified grade
    printf("\nEnter a specified grade: ");
    scanf("%f", &specified_grade);

    // Print students who scored above the specified grade
    print_above_grade(students, 10, specified_grade); //call the function 

    // Find and print the student with the highest marks
    struct Student top_student = find_top_student(students, 10); // call the function to find top student
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
           top_student.name, top_student.roll_number, top_student.marks);

    return 0;
}

// Function to print all students with marks above a specified grade
void print_above_grade(struct Student students[], int count, float grade) {
    printf("Students who scored more than %.2f:\n", grade);
    int found = 0; // no student at the begin
    for (int i = 0; i < count; i++) {
        if (students[i].marks > grade) {
            printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
                   students[i].name, students[i].roll_number, students[i].marks);
            found = 1; // find a student have score more than a specified grade
        }
    }
    //if no student have score more than a specified grade
    if (!found) {
        printf("No students scored more than %.2f\n", grade);
    }
}

//Function to find and return the student with the highest score
struct Student find_top_student(struct Student students[], int count) {
    struct Student top_student = students[0]; //array for top student with no one [0]
    for (int i = 1; i < count; i++) { //loop to find the top student
        if (students[i].marks > top_student.marks) { //compare mark to find
            top_student = students[i]; //add to student to array
        }
    }
    return top_student;
}
