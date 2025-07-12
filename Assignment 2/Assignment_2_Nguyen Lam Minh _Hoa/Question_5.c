#include <stdio.h>

int main()
{
    int arr[1000];
    int i, n;
    int sum = 0;
    
    //I can use float but use int is good enough
    int average; 
    
    //input the number elements for an array
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    
    // input the elements
    for (i = 0; i < n; ++i) {
        printf("Enter the element %d: ", i);
        scanf("%d", &arr[i]);
        // adding the number to the sum (find sum)
        sum += arr[i];
    }
    
    //print sum
    printf("Sum = %d\n", sum);
    
    // calculate average
    average = sum / n;
    
    //print average
    printf("Average = %d", average);

    return 0;
}