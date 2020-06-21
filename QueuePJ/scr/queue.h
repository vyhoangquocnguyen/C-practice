/*
 * queue.h
 *
 *  Created on: Jun. 15, 2020
 *      Author: vy
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N = 1024

struct queueStruct
{
	int N_t;
	int data[N];
	size_t front;
	size_t rear;
};
typedef struct queueStruct queue_t;

bool queueEmpty(queue_t *s);

void enqueue(queue_t *s, int x);

void dequeue(queue_t *s);

#endif /* QUEUE_H_ */
