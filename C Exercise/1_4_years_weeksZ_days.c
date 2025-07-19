// Write a C Program to Convert a Given Number of Days in terms of Years, Weeks & Days 
#include <stdio.h>

int calculate_years(int days1);
int calculate_weeks(int days2);
int calculate_remaining_days(int days3);


int main()
{
    int d;
    int years_results, weeks_result, remaining_days_result;
    
    printf("Enter the number of days: ");
    scanf("%d", &d);
    
    years_results = calculate_years(d);
    weeks_result = calculate_weeks(d);
    remaining_days_result = calculate_remaining_days(d);
    
    printf("%d days is equivalent to:\n", d);
    printf("%d years\n", years_results);
    printf("%d weeks\n", weeks_result);
    printf("%d days\n", remaining_days_result);
    
    return 0;
}

int calculate_years(int days1) {
    int years;
    years = days1 / 365;
    return years;
}

int calculate_weeks(int days2) {
    int weeks;
    weeks = days2 / 7;
    return weeks;
}

int calculate_remaining_days(int days3) {
    int remaining_days;
    remaining_days = days3 % 7;
    return remaining_days;
}

