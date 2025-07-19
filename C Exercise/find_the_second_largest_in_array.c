#include <stdio.h>

int find_second_largest(int arr[], int size);

int main() {
    int arr[100], size_of_the_array;
    int second_largest;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size_of_the_array);

    printf("Enter the array elements: ");
    for (int i = 0; i < size_of_the_array; i++) {
        scanf("%d", &arr[i]);
    }

   second_largest = find_second_largest(arr, size_of_the_array);

    if (second_largest != -1) {
        printf("The second largest element is: %d\n", second_largest);
    }

    return 0;
}

int find_second_largest(int arr[], int size) {
    int first, second;
    
    //check the array is good enough to find the second largest or not
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return -1;
    }
    
    first = second = -2147483648; // Initialize to the smallest possible integer
    
    //find the second largest in the array
    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == -2147483648) {
        printf("There is no second largest element.\n");
        return -1;
    }

    return second;
}
