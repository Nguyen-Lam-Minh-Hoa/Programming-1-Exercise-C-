// Write a C Program to Find the Biggest of 3 given Numbers 
#include <stdio.h>

int find_the_biggest(int num1, int num2, int num3);

int main()
{
    int n1, n2, n3;
    int result;
    
    printf("Enter 3 numbers:\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    result = find_the_biggest(n1, n2, n3);
    
    printf("The biggest numbers is: %d", result);

    return 0;
}

int find_the_biggest(int num1, int num2, int num3) {
    int biggest;
    
    biggest = num1;
    
    if (num2 > biggest) {
        biggest = num2;
    }
    
    if (num3 > biggest) {
        biggest = num3;
    }
    return biggest;
    
}