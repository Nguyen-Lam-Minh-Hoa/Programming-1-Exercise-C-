#include <stdio.h>

int main() {
    char str[1000];
    int alphabets = 0, digits = 0, special_chars = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; i++) {

        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            alphabets++;
        }
        
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }

        else if (str[i] != '\n') { 
            special_chars++;
        }
    }

    // Output the results
    printf("NUmber of Alphabets in the string is: %d\n", alphabets);
    printf("NUmber of Digits in the string is: %d\n", digits);
    printf("Number of Special Characters in the string is: %d\n", special_chars);

    return 0;
}
