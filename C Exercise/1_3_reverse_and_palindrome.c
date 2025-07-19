// Write a C Program to Reverse a Number & Check if it is a Palindrome 
#include <stdio.h>

int reverse_a_number(int number1);
int palindrome(int number2);

int main()
{
    int n;
    int reversed_result;
    int check_palindrome;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    reversed_result = reverse_a_number(n);
    printf("Reversed number: %d", reversed_result);
    
    check_palindrome = palindrome(n);

    return 0;
}

int reverse_a_number(int number1) {
    int remainder;
    int reversed_num = 0;
    
    while (number1 != 0) {
        remainder = number1 % 10;
        reversed_num = reversed_num * 10 + remainder;
        number1 /= 10;
    }
    return reversed_num;
}

int palindrome(int number2) {
    int reversed_num;
    
    reversed_num = reverse_a_number(number2);
    
    if (reversed_num == number2) {
        printf("\n%d is a palindrome.", number2);
    }
    else {
        printf("\n%d is not a palindrome.", number2);
    }
    return 0;
}