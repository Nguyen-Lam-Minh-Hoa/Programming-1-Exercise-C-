#include <stdio.h>

int main()
{
    int a[10000];
    int i;
    int n1;
    
    int a_even[10000];
    int a_odd[10000];
    int even_index = 0;
    int odd_index = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d",&n1);
    
    printf("Enter the array elements: ");
    for(int i = 0; i < n1; i++) {     
       scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n1; i++) {
        if (a[i] % 2 == 0) {
            a_even[even_index++] = a[i];
        }
        else if (a[i] % 2 != 0) {
            a_odd[odd_index++] = a[i];
        }
    }
    
    printf("The Even elements are: ");
    for (i = 0; i < even_index ; i++) {        
        printf(" %d ", a_even[i]);
    }
    
    printf("\nThe Odd elements are: ");
    for (i = 0; i < odd_index; i++) {
        printf(" %d ", a_odd[i]);
    }
    
    return 0;
}