//Write a C program that generate a N-element array with N integer numbers from user.
//Print the original array and print the sorted array in ascending order using bubble sort 
//(sinking sort) and pointers.
#include <stdio.h>

void input_array(int *array, const int size); //function to input array
void print_array(int *const array, const int size); //function to print array
void sort_array(int *array, const int size); // function to sort array

int main()
{
    int N; //create a variable N to store size of the array
    printf("Array size: "); //ask user to input array size
    scanf("%d", &N);
    int a[N]; //create a array with the size from the user
    
    input_array(a, N); //call the function to input the array with size N
    printf("The original array:\n"); //show the original array
    print_array(a, N);//call the function to print the array that the user input before
    
    sort_array(a, N); //call the function to sort the array from the original array
    printf("The sorted array:\n"); //show the sorted array
    print_array(a, N);//call the function to show the array that is sorted

    return 0; //end
}

//function to input the array from the user
void input_array(int *array, const int size) {
    int *ptr; // Pointer to iterate through the array
    for (ptr = array; ptr < array + size; ptr++) { //loop through the array
        printf("Element [%ld] = ", ptr - array); //show the element for user to input
        scanf("%d", ptr); // Read an integer and store it in the array using pointer
    }
}

//function to print the array
void print_array(int *const array, const int size) {
    int *ptr; // Pointer to iterate through the array
    for (ptr = array; ptr < array + size; ptr++) { //loop through the array
        printf("%3d", *ptr); // Dereference the pointer to print the value at the current position
    }//end loop
    printf("\n"); //create a new line when loop completed
}

//function to sort array (bubble sort)
void sort_array(int *array, const int size) {
    int pass; //trach the number through the array
    int *ptr; // Pointer to iterate through the array
    int hold; // Hole the value 
    for (pass = 1; pass < size; pass ++) { //loop for each pass
        for (ptr = array; ptr < array + size - 1; ptr ++) { // Inner loop to compare adjacent elements
            if (*ptr > *(ptr + 1)) { // If the current element is greater than the next element
                hold = *ptr; //swap the two elements
                *ptr = *(ptr + 1);
                *(ptr + 1) = hold;
            } // end if
        } //end for 1
    } //end for 2
}