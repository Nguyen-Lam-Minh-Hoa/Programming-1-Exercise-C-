/*Write a C  program that calculate the length of a string 
 which inputted by user (using the pointer)*/
#include <stdio.h>

int string_length(char *str); //create a function to calculate the string length

int main()
{
    char str[100]; //str can hold up to 100 characters
    
    printf("Enter a string: "); //ask user to enter a string
    
    //Get the input from the user
    fgets(str, sizeof(str), stdin);
    
    //Remove newline character if present from fgets
    if (str[string_length(str) - 1] == '\n') { 
        str[string_length(str) - 1] = '\0';
    }
    //print the length 
    printf("Length of the string: %d\n", string_length(str));

    return 0; //end
}

//function to calculate the string length
int string_length(char *str) {
    int length = 0; //create length begin with 0 to calculate
    while (*str != '\0') { //Traverse the string until the null character
        length++; //increase
        str++; //Move the pointer to the next character
    }//end while
    return length; //return the result when complete
}//end function