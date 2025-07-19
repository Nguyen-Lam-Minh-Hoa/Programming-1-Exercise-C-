/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char product, in_stock;
    printf("Please enter the product: ");
    scanf("%c", &product); // suppose the product is 'b'
    
    // check the product
    if (product == 'b') {
        printf("The product is in stock.");
    }
    else {
        printf("The product is out of stock.");
        //cancel or change
        printf("Do you want to cancel or change? (0 for cancel and 1 for change)");
        int cancel_change;
        scanf("%d", &cancel_change);
        if (cancel_change == '0') {
            printf("Cancel the product.");
        else {
            printf("Change the product.");
        }
        }
    }
    return 0;
}