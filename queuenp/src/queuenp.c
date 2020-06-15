/*
 ============================================================================
 Name        : queuenp.c
 Author      : Vy
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#define L 1024
int q[L];
size_t rear = -1;
size_t front = -1;
void enque(int x)
{
		if(rear==L-1) // condition for overflow queue, which is when index read = L-1
			printf("Queue Overflow\n");
		else
		{
			if(front==-1)
			front=0; //assign "pointer" front to index 0
			rear=rear+1; //increase the index of rear
			q[rear]=x;//assign value to the index at q[rear]
			printf("Index rear at:%d, Element enqueue is:%d\n",rear,q[rear]);
		}

		return;
}
bool stackEmpty(void)
{
		bool result;
		if (front ==-1 || front>rear)
		{
			printf("Queue underflow.\n");
			result = true;
		}
		else
			result = false;
		return result;
}
void dequeue()
{
		printf("Front is at index: %d, Removed element is %d\n",front, q[front]); /*after we run queue,
		front is at index 0*/
		front=front+1; /*increment of front, front keep increasing until meeting the condition in (stackEmpty)
		which is front ==-1 or front > rear*/
}
int main(void) {
		int loadarr[] ={ 52, -29, 36, -821, 790, -650, 1125, 72, 0, 68, 33, 59 };
		size_t N = sizeof(loadarr) / sizeof(int); // size of the array, size = total data size / size of an integer

		/* print out contents of array */
		printf("data to be loaded on to the stack:\n");
		for (size_t i = 0; i != N; ++i)
		{
			printf("%d ", loadarr[i]); //in for loop from 0 to N-1, showing the data from the stack.
		}
		printf("\n");

		// load queue

		printf("enqueue elements: \n");
		for (size_t i = 0; i!=N; ++i)
		{
			enque(loadarr[i]); //loading the element i into the queue.
		}

		//dequeue

		printf("dequeue elements: \n");
		while(stackEmpty()==false)
		{
			dequeue(); //after running enqueue, the front index is at 0.
		}

		// Exit normally*/
		return EXIT_SUCCESS;
}

