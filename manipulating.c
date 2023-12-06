// MANIPULATING SOURCE
// This directive suppresses warnings related to the use of certain functions in Visual Studio.
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// VERSION 2 //
// 
// Function to demonstrate string concatenation
void manipulation(void) {
    printf("*** start of Concatenating Strings Demo ***\n");

    // Declare two character arrays to store strings
    char compare1[BUFFER_SIZE];
    char compare2[BUFFER_SIZE];
    int result;
    
    // Loop starts
    do {
        printf("Type the 1st string to compare (q - to quit):\n");  // prompts user to enter the 1st string to compare
        fgets(compare1, BUFFER_SIZE, stdin);
        compare1[strlen(compare1) - 1] = '\0';   // Removes the newline charachter from string 1

        // check if string 1 is not equal to 'q' 
        if (strcmp(compare1, "q") != 0)   
        {
            printf("Type the 2nd string to compare:\n"); // promts for string 2
            fgets(compare2, BUFFER_SIZE, stdin);
            compare2[strlen(compare2) - 1] = '\0'; // removes newline character
           
            //compareing both string and store result in variable
            result = strcmp(compare1, compare2);

            //printing the reuslt
            if (result < 0)
                printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
            else if (result == 0)
                printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
            else
                printf("\'%s\' string is greater than \ '%s\'\n", compare1, compare2);

        }
    } while (strcmp(compare1, "q") != 0); //terminates loop when string is q

    printf("*** End of Concatenating Strings Demo ***\n\n");
}
