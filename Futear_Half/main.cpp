#include <stdio.h>
#include  "NodeList.h";

extern Node *Seach_Element(int(*compare)(void const *, void const *));
extern int compare_value(void const *a,void const *b);



int main()
{
	char *io = "a";
	char f = io[0];
	printf("%d", f);
};