#include <stdio.h>

int calculate_years(int days);
int calculate_weeks(int days);
int calculate_remaining_days(int days);

int main()
{
    int d;
    int years_result, weeks_result, remaining_days_result;
    
    //input the number of days
    printf("Enter the number of days: ");
    scanf("%d", &d);
    
    //call function to calculate years
    years_result = calculate_years(d); // Calculate years
    //call function to calculate weeks
    weeks_result = calculate_weeks(d % 365);  // Calculate weeks after converting to years
    //call function to calculate remaining days
    remaining_days_result = calculate_remaining_days(d % 365);  // Calculate remaining days after years
    
    //print the result
    printf("%d days is equivalent to:\n", d);
    printf("%d years\n", years_result);
    printf("%d weeks\n", weeks_result);
    printf("%d days\n", remaining_days_result);
    
    return 0;
}

//function to calculate years
int calculate_years(int days) {
    int years;
    years = days / 365;
    return years;
}

//function to calculate weeks
int calculate_weeks(int days) {
    int weeks;
    weeks = days / 7;
    return weeks;
}

//funtion to calculate remaining days
int calculate_remaining_days(int days) {
    int remaining_days;
    remaining_days = days % 7;
    return remaining_days;
}
