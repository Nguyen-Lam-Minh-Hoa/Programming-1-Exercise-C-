//1) Write a C program to calculate sum & average of an integer array with N elements? cending/descending order
#include <stdio.h>

int main()
{
    int arr[1000];
    int i, n;
    int sum = 0;
    
    float average;
    
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    
    for (i = 0; i < n; ++i) {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
        // adding the number to the sum
        sum += arr[i];
    }
    
    printf("Sum = %d\n", sum);
    
    // calculate average
    average = sum / n;
    printf("Average =%f", average);

    return 0;
}
