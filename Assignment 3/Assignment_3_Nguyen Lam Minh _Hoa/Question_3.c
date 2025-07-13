#include<stdio.h>

// Function prototype
void input_array(int *const a, int N); //function to input the array
void display_array(int *const a, int N);// function to display the array
void search_key(int *const a, int N, int key);// function to search key in array

// Main function
int main() 
{
    // Variables declaration
    int N, *p, key;
    
    // Input process
    printf("Enter the size of the array: ");
    scanf("%d", &N);

    int a[N]; //create an array with the size from the user
    
    // Output process
    input_array(a, N); //call the function to input the array
    display_array(a, N); //call the function to display the array
    
    //ask the user to input a search key
    printf("\nEnter a search key: "); 
    scanf("%d", &key);
    search_key(a, N, key); //call the function search for the search key

    return 0; 
}

// Function to input the elements
void input_array(int *const a, int N) {
    int *p; // Local pointer
    for (p = a; p < a + N; p++) {  // Loop through all elements
        printf("Enter element a[%ld]: ", p - a);
        scanf("%d", p); //store the input at memory location of *p
    }//end for
}
//funtion to display the array
void display_array(int *const a, int N) {
    int *p; // Local pointer
    for (p = a; p < a + N; p++) {  // Loop through all elements
        printf("%d   ", *p); // Dereference the pointer
    }//end for
}

//function to search for a key in the array
void search_key(int *const a, int N, int key) {
    int *p; // Local pointer
    int found = 0; //found = 0 means key is not found
    for (p = a; p < a + N; p++) {  // Loop through all elements
        if (*p == key) {
            printf("The search key is in the position: %ld\n", (p - a) + 1);  // Print position
            found = 1; //found = 1 means key is found
            break;  // Stop searching after the first occurrence
        } //end if
    } //end for
    if (found == 0) { //if found is still 0, key is not found
        printf("No position was found!\n");
    }//end if
}