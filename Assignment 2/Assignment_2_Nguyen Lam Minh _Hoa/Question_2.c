#include <stdio.h>

int factorial(int num);
float calculate_series_sum(int limit);

int main()
{
    float result;
    int lim = 6; //can change if we want to find more (ex; 7 or 8)
    
    result = calculate_series_sum(lim); // call function using result
    
    // print the sum of the deries
    printf("The sum of the series is: %f\n", result);

    return 0;
}

//function to find factorial
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1; // 0! is 1, 1! is 1
    } 
    else {
        return num * factorial(num - 1);
    }
}

//function to find the sum of the series
float calculate_series_sum(int limit) {
    float sum = 0;
    for (int i = 1; i <= limit; i++) {  
        sum += (float)factorial(i) / i; 
    }
    return sum; // Moved return statement outside the loop
}
