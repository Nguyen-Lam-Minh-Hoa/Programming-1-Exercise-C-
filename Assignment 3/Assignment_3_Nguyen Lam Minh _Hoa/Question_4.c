#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//function prototypes

void input_array(int *const array, const int size); //function to input the elements from the array
void print_array(int *const array, const int size); //function to print the array

int main()
{
    //variables declaration
    int N; //array size
    int X; //value to be deleted
    int *P1, *P2; //pointers to array
    
    //input process
    printf("Enter array size (N>=100): "); //ask the user to input the array size that is greater than 100
    scanf("%d", &N);
    int a[N]; // int array with N elements
    srand(time(NULL)); //seed for random numbers
    input_array(a, N);//call the function to input the array
    printf("The original array:\n");
    
    print_array(a, N); //call the funtion to print the array
    
    //processing
    printf("Enter a value (from 1 to 50) to be deleted = ");
    scanf("%5d", &X);
    for (P1 = P2 = a; P1 < a + N; P1++) {//loop through the array
        if (*P1 != X) { //check if if P1 is equal to X or not
            *P2 = *P1; //copy the value at P1 to P2
            P2++; //increase P2 to prepare for the next copy
        }
    }
    
    //output process
    int M = P2 - a; //new size
    printf("The new array:\n");
    print_array(a, M); //call the function to print the array with new size
    printf("\nThere are %d values of %d being deleted from the original array\n", N - M, X);

    return 0;
}

//function to input the elements of the array
void input_array(int *const array, const int size) {
    int *p = NULL;//declare a local pointer
    for (p = array; p < array + size; p++) {//loop through the array
        *p = 1 + rand() % 50; // sets each array element equal to a random from 1 to 50
    }
}

//function to print the elements of the array
void print_array(int *const array, const int size) {
    int *p = NULL; //local pointer
    for (p = array; p < array + size; p++) { //loop through the array
        printf("%4d", *p);
        if ((p - array + 1) % 10 == 0) { //check if 10 elements have been printed in the current row
            printf("\n"); //newline
        }
    }
    
}