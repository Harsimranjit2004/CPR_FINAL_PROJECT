// MANIPULATING SOURCE
// This directive suppresses warnings related to the use of certain functions in Visual Studio.
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// VERSION 1 //
// 
// Function to demonstrate string concatenation
void manipulation(void) {
    printf("*** start of Concatenating Strings Demo ***\n");

    // Declare two character arrays to store strings
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];

    
    do {
        
        printf("Type the 1st string (q - to quit):\n");

        // Read input from the user and remove the newline character
        fgets(string1, BUFFER_SIZE, stdin);  //getting character into string 1 with max length of buffer size
        string1[strlen(string1) - 1] = '\0'; //adding null terminator to the string1

        if ((strcmp(string1, "q") != 0)) {  //only breaks when string is 'q'
            printf("Type the 2nd string:\n");

            // Read input from the user and remove the newline character
            fgets(string2, BUFFER_SIZE, stdin); //input for string 2
            string2[strlen(string2) - 1] = '\0';

            // Concatenate the 2nd string to the 1st string
            strcat(string1, string2); //concatinate two strings

            printf("Concatenated string is \'%s\'\n", string1); //prints concatinated string
        }

    } while (strcmp(string1, "q") != 0); //terminates loop when string is q

    printf("*** End of Concatenating Strings Demo ***\n\n");
}

// int main(void) {
// 	manipulation();
// }
