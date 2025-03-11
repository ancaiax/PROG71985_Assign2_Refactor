#include "GetInput.h"
#include <stdio.h>
#include <stdlib.h>

//madisont - prog71985 - assign2 refactor, q3 - implementation

//Write getInput function
int getInput() {

	int days_input;

	//Get input
	printf("Please enter a number of days (enter a number less than 1 to exit):\n");
	int symbols_returned = scanf("%d", &days_input);

	//Validate input given
	if (symbols_returned != 1)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}

	return days_input;
}