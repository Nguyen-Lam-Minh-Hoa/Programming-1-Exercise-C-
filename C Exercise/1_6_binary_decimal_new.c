// Write a C Program to Convert the given Binary Number into Decimal
#include <stdio.h>
#include <math.h>

int binary_decimal(int binary_num);

int main()
{
    long long number;
    int result;
    
    printf("Enter a binary number: ");
    scanf("%lld", &number);
    
    result = binary_decimal(number);
    printf("Decimal equivalent: %d", result);

    return 0;
}

int binary_decimal(int binary_num) {
    int decimal_num = 0;
    int position = 0;
    int remainder;
    
    while (binary_num != 0) {
        remainder = binary_num % 10;
        decimal_num += remainder * pow(2, position);
        binary_num /= 10;
        position++;
    }
    return decimal_num;
}