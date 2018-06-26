#include <stdio.h>

void print_others()
{
	int value = 12;
	printf("%d", value);
	printf("%04d", value);
	printf("%-d", value);
	printf("%+d", value);
	printf("%-.4d", value);
}