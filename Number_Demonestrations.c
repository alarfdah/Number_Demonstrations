/**
 * Date: 01/20/2019
 * Class: CS5541
 * Assignment: Assignment 2 - Number_Demonestrations
 * Author: Ahmed Radwan
 */
#include <stdio.h>

int main(int argc, char **argv) {
	// Problem 1
	float prob1 = 3.6;
	printf("Problem 1: %.10f\n", prob1);

	// Problem 2
	float prob2 = 1.0/10.0;
	printf("Problem 2: %.10f\n", prob2);

	// Problem 3.1
	double prob3 = 1/2;
	printf("Problem 3.1: %f\n", prob3);

	// Problem 3.2
	prob3 = 1.0/2.0;
	printf("Problem 3.2: %f\n", prob3);

	// Problem 4.1
	double prob4 = 9999999.4499999999;
	printf("Problem 4.1: %f\n", prob4);

	// Problem 4.2
	printf("Problem 4.2: %f\n", (float)prob4);

	// Problem 5.1
	int prob5 = 30000*30000;
	printf("Problem 5.1: %d\n", prob5);

	// Problem 5.2
	prob5 = 40000*40000;
	printf("Problem 5.2: %d\n", prob5);

	// Problem 5.3
	prob5 = 50000*50000;
	printf("Problem 5.3: %d\n", prob5);

	// Problem 5.4
	prob5 = 60000*60000;
	printf("Problem 5.4: %d\n", prob5);

	// Problem 6.1
	float prob6 = 1e20;
	printf("Problem 6.1: %f\n", prob6);

	// Problem 6.2
	prob6 = (1e20 + 3500000000);
	printf("Problem 6.2: %f\n", prob6);

	// Problem 6.3
	prob6 = (1e20 + (3500000000 * 1000000000));
	printf("Problem 6.3: %f\n", prob6);

	// Problem 6.4
	prob6 = 1e20;
	int i = 0;
	for (i = 0; i < 1000000000; i++) {
		prob6 += 3500000000;
	}
	printf("Problem 6.4: %f\n", prob6);
	return 0;
}
