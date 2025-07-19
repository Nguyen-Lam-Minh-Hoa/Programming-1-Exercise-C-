/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char light_color;
    
    // input light color
    printf("Please enter the light color (r for Red, y for Yellow and g for Green): ");
    scanf("%c", &light_color);

    // classify the color
    if (light_color == 'r') {
        printf("Please stop 20 seconds."); // if the color is red
    }
    else if (light_color == 'y') {
        printf("Please wait for 5 seconds."); // if the color is yellow
    }
    else if (light_color == 'g') {
        printf("You can go."); // if the color is green
    }
    
    return 0;
}