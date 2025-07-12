#include <stdio.h>
#include <math.h>

long long binary_decimal(int binary_num);

int main()
{
    //using long long can help with large binary numbers
    long long number;
    long long result;
    
    // input the binary number
    printf("Enter a binary number: ");
    scanf("%lld", &number);
    
    //call function to convert binary to decimal
    result = binary_decimal(number);
    
    //print the result
    printf("Decimal equivalent: %lld", result);

    return 0;
}

//function to convert binary to decimal
long long binary_decimal(int binary_num) {
    long long decimal_num = 0;
    int position = 0;
    int remainder;
    
    while (binary_num != 0) {
        remainder = binary_num % 10; // get the last digit
        decimal_num += remainder * pow(2, position);
        binary_num /= 10; // remoe the last digit
        position++; // move to next position
    }
    return decimal_num;
}