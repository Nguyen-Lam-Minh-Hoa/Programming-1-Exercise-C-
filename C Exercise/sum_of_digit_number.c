#include <stdio.h>

int digit_sum(int num);

int main() {
    int number;
    int result;
    
    printf("Enter a digit number: ");
    scanf("%d", &number);
    
    result = digit_sum(number);
    
    printf("The sum of the digit number is: %d", result);

    return 0;
}

int digit_sum(int num) {
    if (num == 0) {
        return 0;
    }
    else {
        return (num % 10) + digit_sum(num/10);
    } 
}