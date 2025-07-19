#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    float largest1 = arr[0], largest2 = arr[1];

    if (largest2 > largest1) {
        float temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } 
        else if (arr[i] > largest2) {
            largest2 = arr[i];
        }
    }

    printf("The two largest numbers are: %.2f and %.2f\n", largest1, largest2);

    return 0;
}