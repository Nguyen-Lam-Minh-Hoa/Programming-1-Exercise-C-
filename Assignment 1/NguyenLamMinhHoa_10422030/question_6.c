/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int days, years, weeks, remaining_days;
    
    //input total number of days from user
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    //conversion
    years = days / 365; // ignoring leap years
    weeks = (days % 365) / 7;
    remaining_days = (days % 365) % 7;
    
    // out put the result
    printf("%d days is quivalent to %d years, %d weeks, and %d days. \n", days, years, weeks, remaining_days);
    
    return 0;
}