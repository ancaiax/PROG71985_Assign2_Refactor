#include "GiveOutput.h"
#include <stdio.h>
#define OUTPUT_RANGE 13

//madisont - prog71985 - assign2 refactor, q1 - implementation

//Write giveOutput function
int giveOutput(int userInput) {

	int output = userInput - OUTPUT_RANGE;

	printf("\n");

	//Print integers based on input
	for (output; output <= userInput; output++)
	{
		printf("%d\n", output);
	}
	return 0;
}