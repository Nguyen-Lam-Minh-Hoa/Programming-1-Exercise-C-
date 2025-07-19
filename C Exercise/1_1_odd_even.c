//Write a C Program to Check if a given Integer is Odd or Even
#include <stdio.h>

void odd_even(int number);

int main()
{
    int n;
    printf("Enter a integer number: ");
    scanf("%d", &n);
    
    odd_even(n);

    return 0;
}

void odd_even(int number) {
    if (number % 2 == 0) {
        printf("A given ineger is Even.");
    }
    else {
        printf("A given integer is Odd");
    }
}