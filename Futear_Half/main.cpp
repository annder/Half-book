#include <stdio.h>
#include  "NodeList.h";

extern Node *Seach_Element(int(*compare)(void const *, void const *));
extern int compare_value(void const *a,void const *b);



int main() {
	const char *str = "string" + 1;
	const char *str_ = "string" - 1;
	char string_ = *"styrin";
	printf("%s\n", str_);
	printf("%s\n", str);
};