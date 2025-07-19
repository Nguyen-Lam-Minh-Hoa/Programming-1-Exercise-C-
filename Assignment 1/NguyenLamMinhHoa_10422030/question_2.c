/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, x, x1, x2, delta;
    // input numbers
    printf("Please enter a, b, c here: ");
    scanf("%d%d%d", &a, &b, &c);
    
    // check if a = 0 or not
    if (a == 0) {
        printf("This is not Polynomial equation.");
    }
    // calculate the delta
    delta = b^2 - 4*a*c;
    
    // check delta with delta<0, delta==0 or delta>0
        if (delta < 0) {
            printf("No solution.");
        }
        else if (delta == 0) {
            x = -b / (2*a);
            printf("The equation has 1 solution: %d", x);
        }
        else if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("The equation has 2 solutions: %d and %d ", x1, x2);
        }
        
    return 0;
}