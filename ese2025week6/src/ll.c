/*
 * ll.c
 *
 *  Created on: Jul. 13, 2020
 *      Author: vy
 *  Created on: Jun. 29, 2020
 *      Author: takis
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
	point = pHead;
	size_t i = 1;
		while(i < insertionPoint)
		{
			point = point->pNext;
			i++;
		}
		afterNode = point->pNext;
		point->pNext = node;
		node->pNext = afterNode;

	return node;
}

/*
 * deleteNode():
 *
 */
void deleteNode(ll_t *pHead, data_key_t nodeToDeleteKey)
{

	return;
}
