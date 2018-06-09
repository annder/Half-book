#include "NodeList.h";
#include <stdlib.h>

Node *init() {
	struct Node *head, *pointer;
	head = pointer = (Node *)malloc(sizeof(Node));
	pointer->data = 0;
	pointer->next = NULL;
	return head;
};

Node *Append(int val) {
	Node *initPointer = init();
	Node *tempPointer = initPointer;
	Node *createNode = (Node *)malloc(sizeof(Node));
	createNode->data = val;
	createNode->next = NULL;
	while (tempPointer->next != NULL)
	{
		tempPointer = tempPointer->next;
	};
	tempPointer->next = createNode;
	return tempPointer;
};