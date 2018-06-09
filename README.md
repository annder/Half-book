//////////////////////////////////////////

```h
#ifndef _NODE_LIST_H_
#define _NODE_LIST_H_
typedef struct Node {
	int data;
	Node *next;
} Node;
#endif // !_NODE_LIST_H
```

///////////////////////////////////////

 % {Operate} %


```c++
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
```