/*
 ============================================================================
 Name        : largestNumber.c
 Author      : Vy
 Version     :
 Copyright   : Your copyright notice
 Description :  C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[]={10,35,19,17,11,25,45,68,92,65,56,73,83,45,75};
		size_t N=sizeof(a)/sizeof(int); // number of elements in s

		printf("Number: %d\n", N);
		printf("The largest integer in the array is: %d\n", find_largest_int(a, N));
		printf("find_largest program complete.\n\n");

	return EXIT_SUCCESS;
}
