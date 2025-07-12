#include <stdio.h>
//Bubble sort
int main()
{
    int num;
    int i;
    int pass, hold;
    
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
    
    // Bubble sort, loop to control number of passes
    for (pass = 1; pass < num; pass++) {
        for (i = 0; i < num - 1; i++) { //loop to control number of comparisons per pass
            if (arr[i] > arr[i + 1]) { // USE > FOR ASCENDING AND < FOR DESCENDING
                hold = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = hold;
            }
        }
    }
    
    //print the result
    printf("Data items in ascending order using Bubble sort:\n"); // if use < above, we change "descending"
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}
    
