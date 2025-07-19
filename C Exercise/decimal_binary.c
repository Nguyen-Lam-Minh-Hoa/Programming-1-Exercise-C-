// decimal to binary

#include <stdio.h>

void decimal_to_binary(int num);

int main()
{
    int number;
    
    printf("Enter a deciaml number: ");
    scanf("%d", &number);
    
    decimal_to_binary(number);

    return 0;
}

void decimal_to_binary(int num) {

    int binary_number[1000];
    int i = 0;
    int j;
    
    while (num > 0) {
        binary_number[i] = num % 2;
        i++;
        num = num / 2;
    }
    
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary_number[j]);
    }
}