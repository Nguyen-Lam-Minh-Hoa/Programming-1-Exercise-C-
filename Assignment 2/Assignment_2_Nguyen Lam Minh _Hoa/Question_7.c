#include <stdio.h>

int main() {
    int num, i, j;
    
    int duplicate_found;
    int duplicate_count;
    
    //input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);
    
    // create 2 arrays after declare "num"
    int arr[num], visited[num];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < num; i++) {
        printf("Element - %d: ", i);
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array to keep track of counted elements
    }
    
    //loop to count the duplicates
    for (i = 0; i < num; i++) {
        if (visited[i] == 1) // Skip already counted duplicates
            continue;
    
        duplicate_found = 0; 
        duplicate_count = 0;
        
        //check for duplicates of array and also count
        for (j = i + 1; j < num; j++) {
            if (arr[i] == arr[j]) {
                duplicate_found = 1;
                visited[j] = 1; // Mark element as counted
            }
        }
        
        if (duplicate_found) {
            duplicate_count++; //if a duplicate is found, increase the total duplicates
        }
    }
    
    //print the result
    printf("Total number of duplicate elements: %d\n", duplicate_count);
    
    return 0;
}