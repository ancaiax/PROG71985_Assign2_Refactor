#define _CRT_SECURE_NO_WARNINGS
#define MIN 2
#define MAX 22
#include <stdio.h>
#include "InputLimit.h"
#include "PrintTable.h"

//madisont - prog71985 - assign2 refactor, q2

//Write a program that prints a table with each line printing the integer, 
//its square root, its square and its cube in that column order.
//Ask the user to enter a lower and upper limit for the table
//set limits so that input stays between 2 and 22. Use a for loop.

//previous feedback

//Question 2: Display a table of numbers, squares and others
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable
//due to the use of good variable names, data and function structure.The code is designed 'defensively'
//(meaning garbage is kept out).The code allows for both effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs / modules,
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is
//accomplishing and how.)

int main(void) {

	int lower_limit;
	int upper_limit;

	//Get lower limit input from user and filter out bad input
	printf("Please enter a lower limit between %d and %d:\n", MIN, MAX);
	int symbols_returned1 = scanf("%d", &lower_limit);
	
	inputLimit(symbols_returned1, lower_limit, MIN, MAX);

	//Get upper limit input from user and filter out bad input
	printf("Please enter an upper limit between %d and %d:\n", lower_limit, MAX);
	int symbols_returned2 = scanf("%d", &upper_limit);

	inputLimit(symbols_returned2, upper_limit, lower_limit, MAX);

	//Print table
	PrintTable(lower_limit, upper_limit); 

	return 0;
}