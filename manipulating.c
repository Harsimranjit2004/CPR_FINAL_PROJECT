// MANIPULATING SOURCE
// This directive suppresses warnings related to the use of certain functions in Visual Studio.
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"

// VERSION 3 //
// 
// Function to demonstrate string concatenation
void manipulation(void) {
    printf("*** start of Concatenating Strings Demo ***\n");

    // Declare two character arrays to store strings
    char haystack[BUFFER_SIZE];
    char needle[BUFFER_SIZE];
    char* occurence = NULL;

    // Loop starts
    do {
        printf("Type the 1st string to compare (q - to quit):\n");  // prompts user to enter the 1st string to compare
        fgets(haystack, BUFFER_SIZE, stdin);
        haystack[strlen(haystack) - 1] = '\0';   // Removes the newline charachter from string 1

        // check if string 1 is not equal to 'q' 
        if (strcmp(haystack, "q") != 0)
        {
            printf("Type the substring:\n"); // promts for string 2
            fgets(needle, BUFFER_SIZE, stdin);
            needle[strlen(needle) - 1] = '\0'; // removes newline character
            
            occurence = strstr(haystack, needle); // search for substring in main string
           
           // check if substring is found
            if (occurence)
                printf("\'%s\' found at %d positon\n", needle, (int)(occurence - haystack));
            else
                printf("Not found\n");
           
        }
    } while (strcmp(haystack, "q") != 0); //terminates loop when string is q

    printf("*** End of Concatenating Strings Demo ***\n\n");
}
