/*
 * queue.c
 *
 *  Created on: Jun. 15, 2020
 *      Author: vy
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

bool queueEmpty(queue_t *s)
{

	if (s->front ==-1 || s->front > s->rear)
	{
		printf("Queue underflow.\n");
		return true;
	}
	else
		return  false;
}
void enqueue(queue_t *s,int x)
{
	if((s->rear) == (s->N_t--)) // condition for overflow queue, which is when index read = L-1
		printf("Queue Overflow\n");
	else
	{

		if(s->front == -1)
		s-> front = 0; //assign "pointer" front to index 0
		s-> rear = s-> rear + 1; //increase the index of rear
		s->data[(s-> rear)] = x;//assign value to the index at q[rear]
		printf("Index rear at:%zu, Element enqueue is:%d\n", s-> rear, s-> data[s->rear]);
	}
	return;

}
void dequeue(queue_t *s)
{
	printf("Front is at index: %d, Removed element is %d\n",s->front, s->data[(s->front)]);
			s->front=s->front+1;
}
