#include <stdio.h>

void cyclic_permute(int arr[], int n, int p);

int main() {
    int arr[5], p;

    printf("Enter the five elements of the array:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the times of permutation p: ");
    scanf("%d", &p);

    cyclic_permute(arr, 5, p);

    printf("Cyclically permuted numbers are given: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void cyclic_permute(int arr[], int n, int p) {
    p = p % n; // Handle cases where p is greater than n

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i - p + n) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}