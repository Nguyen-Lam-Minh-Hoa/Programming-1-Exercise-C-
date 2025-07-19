// 5) Write a C Program to Convert Numbers to Roman Numerals 
#include <stdio.h>

void number_to_roman(int number);

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    number_to_roman(num);

    return 0;
}

void number_to_roman(int number) {
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i = 0;
    while (number > 0) {
        while (number >= value[i]) {
            printf("%s", symbol[i]);
            number -= value[i];
        }
        i++;
    }
}