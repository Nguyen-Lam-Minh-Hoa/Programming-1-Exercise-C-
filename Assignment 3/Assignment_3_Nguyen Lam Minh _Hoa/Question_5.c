#include <stdio.h>

//define a person structure
struct person{
    char first_name[50]; //filed to store the first name
    char last_name[21]; //filed to store the last name
    int age; //filed to store the age
    float height; //filed to store the height
    float weight; //filed to store the weight
    char nationality[50]; //filed to store the nationality
    char job[30]; //filed to store the job
};

int main()
{
    struct person people1; //decalre a variable people1 for the structure
    // read people first name last name, age, height, weight, nationality, job
    
    printf("Enter first name: ");
    scanf("%s", people1.first_name);
    
    printf("Enter last name: ");
    scanf("%s", people1.last_name);
    
    printf("Enter age: ");
    scanf("%d", &people1.age);
    
    printf("Enter height: ");
    scanf("%f", &people1.height);
    
    printf("Enter weight: ");
    scanf("%f", &people1.weight);
    
    printf("Enter nationality: ");
    scanf("%s", people1.nationality);
    
    printf("Enter job: ");
    scanf("%s", people1.job);
    
    // print the people first_name, Last name, age, height, weight, nationality, job
    printf("\nThe person details:\n");
    printf("\nFirst name: %s\n", people1.first_name);
    printf("Last name: %s\n", people1.last_name);
    printf("Age: %d\n", people1.age);
    printf("Height: %.2f\n", people1.height);
    printf("Weight: %.2f\n", people1.weight);
    printf("Nationality: %s\n", people1.nationality);
    printf("Job: %s\n", people1.job);
    
    return 0; //end
}