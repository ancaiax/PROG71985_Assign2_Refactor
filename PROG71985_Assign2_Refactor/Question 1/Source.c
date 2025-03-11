#define _CRT_SECURE_NO_WARNINGS
#include "GetInput.h"
#include "GiveOutput.h"

//madisont - prog71985 - assign2 refactor, q1

//Write a program that asks the user to enter an integer and then prints all the  
//integers starting at a value 13 less than the value entered by the user 
//up to the value entered by the user

//previous feedback

//Question 1: Print a range of numbers
//o Specifications : 4.0 / 4.0 (The program works and meets all of the specifications.)
//o Readability + Design : 4.0 / 4.0 (The code is exceptionally well organized and readable
//due to the use of good variable names, data and function structure.The code is designed ‘defensively’
//(meaning garbage is kept out).The code allows for both effective testing and extension.)
//o Reusability : 4.0 / 4.0 (The code is exceptionally well organized into ADTs / modules,
//demonstrating SRP, coupling and cohesion.)
//o Documentation : 4.0 / 4.0 (The documentation is well written and clearly explains what the code is
//accomplishing and how.)

int main(void) {

	int user_input = getInput();

	giveOutput(user_input);

	return 0;
}