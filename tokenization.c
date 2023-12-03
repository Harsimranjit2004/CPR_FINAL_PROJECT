#include <stdio.h>
#include <string.h>  // Include the string.h header for string manipulation functions
#include "tokenization.h"
#define BUFFER_SIZE 300
// V1
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");

    char    words[BUFFER_SIZE];
    char* nextWord = NULL;
    int     wordsCounter;

    do {
        // Prompt the user to input some words
        printf("Type a few words separated by space (q - to quit):\n");
        fgets(words, BUFFER_SIZE, stdin);

        // Remove the newline character at the end of the input
        words[strlen(words) - 1] = '\0';

        // Check if the input is not 'q' to continue tokenizing
        if (strcmp(words, "q") != 0) {
            nextWord = strtok(words, " ");  // Tokenize the input using space as a delimiter
            wordsCounter = 1;

            // Iterate through the tokenized words and print each one
            while (nextWord) {
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);  // Continue the loop until the input is 'q'

    printf("*** End of Tokenizing Words Demo ***\n\n");
}

// int main() {
//     tokenizing();  // Call the tokenizing function from the main function
//     return 0;      // Indicate successful program execution
// }
