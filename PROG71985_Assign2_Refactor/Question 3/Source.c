#define _CRT_SECURE_NO_WARNINGS
#define DAYS_IN_WEEK 7
#include <stdio.h>
#include "GetInput.h"
#include "GiveOutput.h"

//madisont - prog71985 - assign2 refactor, q3

//Write a program that asks the user to enter some number of days and then
//converts that value to weeks and days
//Display results in the following format: 18 days is 2 weeks, 4 days.
//Use a do...while loop structure to allow the user to repeatedly enter day values; 
//terminate the loop when the user enters a non-positive value

//Question 3: Convert a number of days to mixed weeks / days format
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//--please simplify - too much duplicated and /or non - reachable code
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable
//due to the use of good variable names, data and function structure.The code is designed ‘defensively’
//(meaning garbage is kept out).The code allows for both effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs / modules, 
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is
//accomplishing and how.)

int main(void) {
	
	int days_input;

	do {
		days_input = getInput();

		if (days_input < 1)
		{
			break;											//terminate the loop
		}

		giveOutput(days_input, DAYS_IN_WEEK);
		
	} while (days_input > 0);

	printf("Cya!\n");
		
	return 0;
}