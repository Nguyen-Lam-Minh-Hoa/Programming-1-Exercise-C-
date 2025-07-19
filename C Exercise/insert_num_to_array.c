#include <stdio.h>

void insert_array(int arr[], int num, int pos, int size);

int main()
{
    int arr[10000];
    int num, pos, size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the position to insert the element: ");
    scanf("%d", &pos);
    
    printf("Enter the number to be insert: ");
    scanf("%d", &num);
    
    insert_array(arr ,num, pos, size);
    
    //print the array
    printf("Array after insert is: ");
    for (int i = 0; i < size + 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void insert_array(int arr[], int num, int pos, int size) {
    for (int i = num; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
}
