#include "GetInput.h"
#include <stdio.h>
#include <stdlib.h>

//madisont - prog71985 - assign2 refactor, q1 - implementation

//Write getInput function
int getInput() {

	int userInput;

	//Get input
	printf("Please enter a whole number:\n");
	int symbols_returned = scanf("%d", &userInput);

	//Validate input given
	if (symbols_returned != 1)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	return userInput;
}