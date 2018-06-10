#include <stdio.h>
#include  "NodeList.h";

extern Node *Seach_Element(int(*compare)(void const *, void const *));
extern int compare_value(void const *a,void const *b);



int main()
{
	int io[3] = { 1 };
	for (auto &element : io)
	{
		printf("%d",element);
	}
};