#include <stdio.h>

void delete_element(int arr[], int size, int pos);

int main() {
    int arr[1000], size_of_array, position;
    
    //input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size_of_array);

    //input the elements for the arry
    printf("Enter the array elements: ");
    for (int i = 0; i < size_of_array; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete the element: ");
    scanf("%d", &position);
    
    //function to delete the element at the position
    delete_element(arr, size_of_array, position);
    size_of_array--; // Decrease the size after deletion

    // print the array
    printf("Array after deletion: ");
    for (int i = 0; i < size_of_array; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void delete_element(int arr[], int size, int pos) {
    if (pos < 0 || pos >= size) { // check the position is available or not
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
}


