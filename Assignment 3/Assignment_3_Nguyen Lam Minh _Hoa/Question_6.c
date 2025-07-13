#include <stdio.h>

// Define a structure for time
struct Time {
    int hours;   // Stores the hours part of time
    int minutes; // Stores the minutes part of time
    int seconds; // Stores the seconds part of time
};

int main() {
              
    struct Time time1, time2, result; // Declare structures to store the times
    //creata a variable
    int seconds, total_seconds; 
    int choice;
    
    // Display menu options
    printf("\nChoose an option:\n");
    printf("1. Convert time (hh:mm:ss) to seconds\n");
    printf("2. Convert seconds to time (hh:mm:ss)\n");
    printf("3. Add two times (hh:mm:ss)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice); 
    
    //switch case for user to choice
    switch (choice) {
        case 1: // Convert time from hh:mm:ss to seconds
            //ask the user to enter time in hh:mm:ss format
            printf("Enter time (hh mm ss): ");
            scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds); // Input hours, minutes, and seconds
            // Calculate total time in seconds
            seconds = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
            printf("The total time in seconds is: %d seconds\n", seconds); // Output the result
            break; //end

        case 2: //Convert seconds to time (hh:mm:ss)
            //ask the user to enter total seconds
            printf("Enter the total seconds: ");
            scanf("%d", &seconds); 
            // Convert seconds into hours, minutes, and seconds
            result.hours = seconds / 3600; // Calculate hours
            seconds %= 3600; //Get the remaining seconds
            result.minutes = seconds / 60; // Calculate minutes
            result.seconds = seconds % 60; // Remaining seconds
            //output the converted time
            printf("The time is: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);
            break; //end

        case 3: // Add two times (hh:mm:ss)
            // ask the user to enter two times
            printf("Enter the first time (hh mm ss): ");
            scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds); //input first time
            printf("Enter the second time (hh mm ss): ");
            scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds); //input second time
            
            //Convert and add
            total_seconds = (time1.hours * 3600 + time1.minutes * 60 + time1.seconds) + 
                            (time2.hours * 3600 + time2.minutes * 60 + time2.seconds);
            
            // Convert back to hh:mm:ss format
            result.hours = total_seconds / 3600; // Calculate hours
            total_seconds %= 3600; // Get the remaining seconds after calculating hours
            result.minutes = total_seconds / 60; // Calculate minutes
            result.seconds = total_seconds % 60; // Remaining seconds

            // Output the total time after adding
            printf("The total time is: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);
            break; //end

        default: // if invalid input for menu choice
            printf("Invaild choice. You should choose 1, 2, 3.\n");
            break; //end
    }

    return 0; 
}

