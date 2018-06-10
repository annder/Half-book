#include <stdio.h>
#include "NodeList.h";
#include <stdlib.h>

int f(int) {
	return 1;
};

Node *Seach_Element(int (*compare)(void const *,void const *)) {
	//...
	Node *result;
	result = (Node *)malloc(sizeof(Node));
	return result;
};

int compare_value(void const *a,void const *b) {
	if (*(int *)a == *(int *)b) {
		return true;
	}
	else {
		return false;
	}
};

void Operate()
{
	int(*pf)(int) = &f;
	int ans;
	ans = f(12);
	ans = (*pf)(13);
	ans = pf(13);
};


//////////////////////////////////////////////////


void avgage() {
	 
}