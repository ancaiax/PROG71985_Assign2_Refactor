#include "InputLimit.h"
#include <stdlib.h>
#include <stdio.h>

//madisont - prog71985 - assign2 refactor, q2 - implementation

//Write inputLimit function
void inputLimit(int inputSymbol, int userInput, int Min, int Max) {

	if (inputSymbol != 1)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}
	else if (userInput < Min || userInput > Max)
	{
		printf("ERROR: Invalid input.\nExiting...\n");
		exit(EXIT_FAILURE);
	}
}
