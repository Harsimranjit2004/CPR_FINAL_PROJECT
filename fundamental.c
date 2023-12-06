//FUNDAMENTAL MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10

#include <string.h>
#include <stdio.h>
#include "fundamental.h"

void fundamentals() {
	/* Version 1 */
	//>> insert here
	printf("*** Start of Indexing Strings Demo ***\n");
	char buffer1[BUFFER_SIZE];							    //Declares the string for the first string input
	char numInput[NUM_INPUT_SIZE];							//Declares the string for the number input
	size_t position;										//Declares the int for position
	do {													//Loops until the user input is "q"
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);					//Gets the user input for buffer1    
		buffer1[strlen(buffer1) - 1] = '\0';				//Removes the newline from the end of the string for buffer1
		if (strcmp(buffer1, "q") != 0) {					//If the user input for buffer1 is not "q"
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);			//gets the user input for numInput
			numInput[strlen(numInput) - 1] = '\0';			//Removes the newline from the end of the string for numInput
			position = atoi(numInput);						//Converts the input to integer
			//if the number entered is more than or equal to the string length
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. available\n");
			}
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);			//prints the character at the required position
		}
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing Strings Demo ***\n\n");
	/* Version 2 */
	//>> insert here
	printf("*** Start of Measuring Strings Demo ***\n");
	char buffer2[BUFFER_SIZE];							//declares the string for the stri
	do {												//Loops until the user enetered value is "q"
		printf("Type a string (q - to quit):\n");
		fgets(buffer2, BUFFER_SIZE, stdin);				//Gets user input for the string whose length is to be measured
		buffer2[strlen(buffer2) - 1] = '\0';			//Removes the newline character at the end of a string
		//if user input for string is not "q"
		if (strcmp(buffer2, "q") != 0) {
			printf("The length of\'%s\' is %d characters\n", buffer2, (int)strlen(buffer2));	//Prints the total number of characters in the user string
		}
	} while (strcmp(buffer2, "q") != 0);
	printf("*** End of Measuring Strings Demo ***\n\n");

	/* Version 3 */
	//>> insert here
	printf("*** Start of Copying Strings Demo ***\n");
	char destination[BUFFER_SIZE];							//Declares the destination string
	char source[BUFFER_SIZE];								//Declares the source string
	do {													//Loops till the user input is "q"
		destination[0] = '\0';								//Resets the destination string 
		printf("Destination string is reset to empty\n");	
		printf("Type the source string (q - to quit):\n");
		fgets(source, BUFFER_SIZE, stdin);					//gets the user string for the destination string and saves it in source
		source[strlen(source) - 1] = '\0';					//removes the newline character at the end
		//if input string is not "q"
		if (strcmp(source, "q") != 0) {	
			strcpy(destination, source);					//copies the string source to string destination
			printf("New destination string is \'%s\'\n", destination);		//Displays the destination string
		}
	} while (strcmp(source, "q") != 0);
	printf("*** End of Copying Strings Demo ***\n\n");
}
int main() {
	fundamentals();
	return 0;
}