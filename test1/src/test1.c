/*
 ============================================================================
 Name        : test1.c
 Author      : Vy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(void)
{
	float array[] = {5, 2.1, 3.5, 22.2, 11 ,43, 6.5, 23, 13, 78, 3, 89, 55, 99};
	size_t L = sizeof(array)/sizeof(float);
	for (size_t i=0; i < L; ++i)
	{
		printf("The %d element of the array is %.2f\n", i, array[i]);
	}
	printf("\n");
	findAverage(array, L);
	return EXIT_SUCCESS;
}
