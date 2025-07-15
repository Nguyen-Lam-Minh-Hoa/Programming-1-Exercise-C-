#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof str, stdin);
    
    while (str[i] != '\0') {
        char ch = tolower(str[i]); 
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } 
            else {
                consonants++;
            }
        }
        i++;
    }

    printf("Total number of vowels in the string is: %d\n", vowels);
    printf("Total number of consonants in the string is: %d\n", consonants);

    return 0;
}
