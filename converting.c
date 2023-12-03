//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"

//V1
void converting(void) {
	printf("*** Start of Converting Strings to int Demo ***\n");
	char intString[BUFFER_SIZE];								//Declares of the char string
	int intNumber;												//Declares the int which will store the converted string
	do {														//loops till the input string is not "q"
		printf("Type an int numeric string (q - to quit):\n");  
		fgets(intString, BUFFER_SIZE, stdin);					//Gets the user input for the character string to be converted to int
		intString[strlen(intString) - 1] = '\0';				//Removes the newline from the string end
		//If the input string is not "q"
		if (strcmp(intString, "q") != 0) {						
			intNumber = atoi(intString);						//Converts the input string to int and saves to intString
			printf("Converted number is %d\n", intNumber);		//Prints the converted int string
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");
}

