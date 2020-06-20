/*
 ============================================================================
 Name        : projQueue.c
 Author      : Vy
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
	queue_t queue;
	queue.front = -1;
	queue.rear = -1;

	int loadarr[] = { 52, -29, 36, 1154, 72, 0, 68, 44, 33, 59 };
	size_t L = sizeof(loadarr)/sizeof(int);

	//enqueue
	size_t i;
	for (i = 0; i != L; ++i)
	{
		printf("queue.rear = %zu, ", queue.rear);
		enqueue(&queue, loadarr[i]);
		printf("enqueue %d\n", loadarr[i]);
	}

	//dequeue
	while (queueEmpty(&queue)==false)
	{
		dequeue(&queue); //after running enqueue, the front index is at 0.
	}

	return EXIT_SUCCESS;
}
