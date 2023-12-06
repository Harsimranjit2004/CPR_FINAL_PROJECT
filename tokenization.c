
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 100  // Define a buffer size for input

void tokenizing() {
    /* Version 1: Tokenizing Words */
    printf("*** Start of Tokenizing Words Demo ***\n");

    char words[BUFFER_SIZE];
    char* nextWord = NULL;
    int wordsCounter;

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


    /* Version 2: Tokenizing Phrases */
    printf("*** Start of Tokenization Phrases Demo ***\n");
    char phrases[BUFFER_SIZE];
    char* nextPhrase = NULL;
    int phrasesCounter;
    do {
        printf("Type a few phrases separated by comma(q - to quit):\n");
        fgets(phrases, BUFFER_SIZE, stdin);
        phrases[strlen(phrases) - 1] = '\0';
        if ((strcmp(phrases, "q") != 0)) {
            nextPhrase = strtok(phrases, ",");
            phrasesCounter = 1;

            // Iterate through the tokenized phrases and print each one
            while (nextPhrase) {
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);
                nextPhrase = strtok(NULL, ",");
            }
        }
    } while (strcmp(phrases, "q") != 0);
    printf("*** End of Tokenizing Phrases Demo ***\n\n");

    /* Version 3: Tokenizing Sentences */
    printf("*** Start of Tokenizing Sentences Demo ***\n");
    char sentences[BUFFER_SIZE];
    char* nextSentence = NULL;
    int sentencesCounter;
    do {
        printf("Type a few sentences separated by dot(q - to quit):\n");
        fgets(sentences, BUFFER_SIZE, stdin);
        sentences[strlen(sentences) - 1] = '\0';
        if ((strcmp(sentences, "q") != 0)) {
            nextSentence = strtok(sentences, ".");
            sentencesCounter = 1;

            // Iterate through the tokenized sentences and print each one
            while (nextSentence) {
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }

    } while (strcmp(sentences, "q") != 0);
    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}



