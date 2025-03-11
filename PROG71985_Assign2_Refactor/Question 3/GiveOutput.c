#include "GiveOutput.h"
#include <stdio.h>

//madisont - prog71985 - assign2 refactor, q3 - implementation

//Write giveOutput function
int giveOutput(int userInput, int value) {

	//Transform
	int weeks = userInput / value;
	int remaining_days = userInput % value;

	//Output to user
	printf("%d days is %d week(s), %d day(s).\n", userInput, weeks, remaining_days);

}