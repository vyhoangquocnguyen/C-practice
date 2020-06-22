/*
 ============================================================================
 Name        : projQueue.c
 Instructor: Taski Zourntos
 Modified by Vy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

int main(void)
{
	queue_t queue;    		//declare variable queue with the custom type queue_t
	queue.front = -1; 		//declare value of queue.front to -1
	queue.rear = -1;

	int loadarr[] = { 52, -29, 36, 1154, 72, 0, 68, 44, 33, 59 };
	size_t L = sizeof(loadarr)/sizeof(int);
	queue.N_t = L;
	/*enqueue*/
	size_t i;
	for (i = 0; i != L; ++i)
	{
		enqueue(&queue, loadarr[i]);
	}

	/*dequeue*/
	while (queueEmpty(&queue)==false)
	{
		dequeue(&queue);	 //after running enqueue, the front index is at 0.
	}

	return EXIT_SUCCESS;
}
