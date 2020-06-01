/*
 * my_func.c
 *
 *  Created on: May 31, 2020
 *      Author: vy
 */
#include<stdio.h>
#include<stdlib.h>
#include "my_func.h"


//This is the function to show the original array
void oriArray(int *a, size_t N)
{
	for (size_t i=0; i < N; ++i)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return;
}

//Function for bubble sort
void bsort(int *a, size_t N)
{
	int i,j,temp;
for (i=0;i<N-1;i++){
	for(j=0;j<N-i-1;j++){
		if(a[j]>a[j+1]){
			temp = a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}
	return;
}

