#include <stdio.h>

int insert_sorted(int arr[], int num, int value);

int main() {
    int n, value;
    int arr[10000];  

    // Input the number of elements in the array
    printf("Enter the number of elements you want to insert: ");
    scanf("%d", &n);
    
    //input the elements
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Input the new element to insert
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Insert the new value into the sorted array and get the new size
    //call the function
    n = insert_sorted(arr, n, value);

    // Print the updated array
    printf("The updated sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

//function to insert the value
int insert_sorted(int arr[], int num, int value) {
    int i;
    
    // Shift elements to the right to make space for the new element
    for (i = num - 1; i >= 0; i--) {
        if (arr[i] > value) {
            arr[i + 1] = arr[i]; // shift the element to tthe right
        }
        else {
            break; // if found the position for new value
        }
    }
    //insert the new element
    arr[i + 1] = value;
    
    //return the new size
    return num + 1;
}
    
