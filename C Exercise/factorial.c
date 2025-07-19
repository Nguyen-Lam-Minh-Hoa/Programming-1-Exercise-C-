// factorial

#include <stdio.h>

int factorial(int num);
float calculate_series_sum(int limit);

int main()
{
    float result;
    int lim;
    
    printf("Enter the number of terms: ");
    scanf("%d", &lim);
    
    result = calculate_series_sum(lim);
    
    printf("The sum of the series is: %f", result);

    return 0;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}

float calculate_series_sum(int limit) {
    float sum = 0;
    for (int i = 1; i <= limit - 1; i++) {
        sum += factorial(i) / i;
        return sum;
    }
}