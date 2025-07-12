#include <stdio.h>
//Selection sort
int main()
{
    int num;
    int i, j, min_index, temp;
    
    //input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    
    // create an array after declare "num"
    int arr[num];
    
    //input the elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < num; i++) {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Selection sort, traverse through all array elements
    for (i = 0; i < num - 1; i++) {
        // Find the minimum element in the unsorted part of the array
        min_index = i;
        for (j = i + 1; j < num; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        // Swap the found minimum element with the first element
        if (min_index != i) {
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }
    
    //print the result
    printf("Data items in ascending order using Selection sort:\n"); 
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}