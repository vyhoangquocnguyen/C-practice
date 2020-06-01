/*
 ============================================================================
 Name        : BubbleSort.c
 Author      : Vy
 Version     :
 Copyright   : Your copyright notice
 Description : BubbleSort in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "my_func.h"

int main(void)
{
	int a[]={10,35,19,17,11,25,45,68,92,65,56,73,83,45,1};
	size_t N=sizeof(a)/sizeof(int); // number of elements in s

	printf("The original data is (Before sorted): \n");
	oriArray(a, N);
	bsort(a, N);
	printf("the sorted data is:\n");
	oriArray(a, N);

	return EXIT_SUCCESS;
}
