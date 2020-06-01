/*
 * my_func.c
 *
 *  Created on: May 31, 2020
 *      Author: vy
 */
#include<stdlib.h>
#include "my_func.h"

int find_largest_int(int *a, size_t N)
{

	int largest = a[0];
	int i;
	printf("largest: %d\n",largest);
	for (i=1;i<N;i++){
		if (largest<a[i]){
			largest=a[i];
		}
	}

	return largest;
}

