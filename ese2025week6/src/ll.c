/*
 * ll.c
 *
 *  Created on: Jul. 13, 2020
 *       Author      : takis
 *        Modified by : Vy
 */

#include <stdlib.h>
#include "ll.h"

/*
 * setPayload():
 */
void setPayload(ll_t* node, data_t payload)
{
	node->payload.X = payload.X;
	node->payload.Y = payload.Y;
	node->payload.key = payload.key;
}

/*
 * createNode():
 *
 */
ll_t* createNode(void)
{
	/* create a pointer for the new node */
	ll_t *node;

	/* allocate the node from heap */
	node = (ll_t*) malloc(sizeof(struct linkedList));

	/* make next point to NULL */
	node->pNext = NULL; //


	/* return the pointer to the new node */
	return node;
}

/*
 * addNode():
 *
 */
ll_t* addNode(ll_t *pHead, data_t payload)
{
	/* create two node pointers */
	ll_t *pNode;
	ll_t *pW;

	/* prepare the new node to be added */
	pNode = createNode();
	setPayload(pNode, payload); /* set the new element's data field to value */

	if (pHead == NULL)
	{
		pHead = pNode; /* if the linked list has no nodes to begin with */
	}
	else
	{
		/* search through list until tail node is found */
		pW = pHead;
		while ((pW->pNext) != NULL)
		{
			pW = pW->pNext;
		}
		/* set the pointer from NULL to temp */
		pW->pNext = pNode;
	}
	return pHead;
}

/*
 * insertNode():
 *
 */
ll_t* insertNode(ll_t *pHead, data_t payload, data_key_t insertionPoint)
{

	ll_t *node;
	ll_t *afterNode;
	ll_t *point;
	node = createNode();			// create a new node
	setPayload(node, payload);		// set up data to new node
	point = pHead;					// set up a temperate point
	size_t i = 0;
		while(i < insertionPoint-1)	// finding the position of the insertionPoint
		{
			point = point->pNext;	//	skip the unwanted position
			i++;
		}
		afterNode = point->pNext;	//	node after insertionNode
		point->pNext = node;		//	insert the new node
		node->pNext = afterNode;	// links next pointer of new node to afterNode

	return node;
}

/*
 * deleteNode():
 *
 */
void deleteNode(ll_t *pHead, data_key_t nodeToDeleteKey)
{
	ll_t *nextPoint;
	ll_t *temp;						// Temperate node.
	size_t i = 0;
	temp = pHead;
	if (pHead == NULL)				// check if linked list is empty
	{
		printf("Empty linked list");
		return;
	}
	//find the position of the node to delete.
	while (i != nodeToDeleteKey-1)	// position of the deleting node
	{
		temp=temp->pNext;			// skipping unwanted node
		i++;
	}
	// position is larger than no. of nodes
	if (temp == NULL || temp->pNext == NULL)
		return;
	nextPoint = temp->pNext->pNext; // node after deleted node
	// Unlink the node from linked list.
	free(temp->pNext); 				// free memory
	temp->pNext = nextPoint;		// assign nextPoint to next pointer
	return;
}
