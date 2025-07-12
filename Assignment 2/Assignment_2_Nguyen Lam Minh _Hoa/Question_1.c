#include <stdio.h>

int main()
{
    int n1, n2, n3, n4;
    int min, max;
    
    // Input 4 numbers
    printf("Enter 4 integer numbers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
    
    // Find the maximum
    max = n1;
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    if (n4 > max) {
        max = n4;
    }
    
    // Find the minimum
    min = n1;
    if (n2 < min) {
        min = n2;
    }
    if (n3 < min) {
        min = n3;
    }
    if (n4 < min) {
        min = n4;
    }
    
    // Print the max and min numbers
    printf("The maximum number is: %d\n", max);
    printf("The minimum number is: %d\n", min);
    
    // Check if the max is prime
    int check_max_prime = 1; // Assume max is prime
    if (max <= 1) {
        check_max_prime = 0; // Not prime
    } else {
        for (int i = 2; i * i <= max; i++) {
            if (max % i == 0) {
                check_max_prime = 0; // Not prime
                break;
            }
        }
    }
    
    if (check_max_prime) {
        printf("The maximum number %d is prime.\n", max);
    } else {
        printf("The maximum number %d is not prime.\n", max);
    }

    // Check if the min is prime
    int check_min_prime = 1; // Assume min is prime
    if (min <= 1) {
        check_min_prime = 0; // Not prime
    } else {
        for (int i = 2; i * i <= min; i++) {
            if (min % i == 0) {
                check_min_prime = 0; // Not prime
                break;
            }
        }
    }

    if (check_min_prime) {
        printf("The minimum number %d is prime.\n", min);
    } else {
        printf("The minimum number %d is not prime.\n", min);
    }

    return 0;
}
