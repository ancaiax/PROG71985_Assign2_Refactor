#include "PrintTable.h"
#include <stdio.h>
#include <math.h>

//madisont - prog71985 - assign2 refactor, q2 - implementation

//Write PrintTable function
void PrintTable(int lowerLimit, int upperLimit) {

	printf("|---------------|-----------------------|---------------|---------------|\n");
	printf("|    Integer\t|      Square Root\t|     Square\t|      Cube\t|\n");					//this is ugly but necessary to make it look pretty
	printf("|---------------|-----------------------|---------------|---------------|\n");

	//Use a for loop
	for (lowerLimit; lowerLimit <= upperLimit; lowerLimit++) {

		float square_root = sqrt(lowerLimit);
		int square = lowerLimit * lowerLimit;
		int cube = lowerLimit * lowerLimit * lowerLimit;

		printf("|\t%d\t|\t%8.2f\t|\t%d\t|\t%d\t|\n", lowerLimit, square_root, square, cube);

	}

	printf("|---------------|-----------------------|---------------|---------------|\n");
}