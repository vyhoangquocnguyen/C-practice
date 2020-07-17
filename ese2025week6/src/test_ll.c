/*
 ============================================================================
 Name        : ese2025week6.c
 Author      : takis
 Modified by : Vy
 Version     :
 Copyright   : Your copyright notice
 Description : , Ansi-style
 ============================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#include "ll.h"

int main(void)
{
	ll_t *pLLHead=NULL; // pointer to list, must be initialized to NULL
	data_t token;

	// create the linked list from standard input;
	// user indicates end of data by entering "9999"
	// for X, Y and key values.
	printf("\nLoading data...\n");
	scanf("%lf %lf %lu", &token.X, &token.Y, &token.key);
	pLLHead = addNode(pLLHead, token);
	int size;
	while (token.X != 9999 && token.Y != 9999 && token.key != 9999)
	{
		scanf("%lf %lf %lu", &token.X, &token.Y, &token.key);
		addNode(pLLHead, token);
		size++;
	}

	printf("     ... done.\n\n");

	// send linked list to standard output
	printf("\nPrinting the entire linked list to standard output:\n");
	ll_t *pW = pLLHead;
	while (pW != NULL)
	{
		token.X = pW->payload.X;
		token.Y = pW->payload.Y;
		token.key = pW->payload.key;
		printf("%lf %lf %lu\n", token.X, token.Y, token.key);
		pW = pW->pNext;
	}

	// terminate
	printf("\n\n ...done!\n\n");


	// Insert node function (middle)
	data_key_t insertPoint ;
	char ans;
	printf("Do you want to insert a node? ");
	for(;;)
	{
		scanf("%c",&ans);
		if(ans == 'y'|| ans =='Y')
		{
			printf("Enter the position you want to insert:");
			scanf("%u",&insertPoint);
			printf("Enter your data point:");
			scanf("%lf %lf %lu", &token.X, &token.Y, &token.key);
			insertNode(pLLHead, token, insertPoint);
			ll_t *pW = pLLHead;
			while (pW != NULL)
			{
				token.X = pW->payload.X;
				token.Y = pW->payload.Y;
				token.key = pW->payload.key;
				printf("%lf %lf %lu\n", token.X, token.Y, token.key);
				pW = pW->pNext;
			}
			break;
		}
		else if(ans == 'n' || ans =='N')
		{
			printf("Bye bye\n");
			break;
		}
		else
			printf("Do you want to insert a node? Please answer y or n\n");
	}


	// Deleting a node
	data_key_t deletingNode;
	char del;
	for (;;)
	{
		scanf("%c",&del);
		if (del == 'y'|| del =='Y')
		{
			printf("Enter the node position you want to delete: \n");
			scanf("%u",&deletingNode);
			deleteNode(pLLHead,deletingNode);
			ll_t *pW = pLLHead;
			while (pW != NULL)
			{
				token.X = pW->payload.X;
				token.Y = pW->payload.Y;
				token.key = pW->payload.key;
				printf("%lf %lf %lu\n", token.X, token.Y, token.key);
				pW = pW->pNext;
			}
			break;
		}
		else if (del == 'n'|| del == 'N')
		{
			break;
		}
		else
			printf("Do you want to delete a node?, Enter y or n\n");
	}
	return 0;
}
