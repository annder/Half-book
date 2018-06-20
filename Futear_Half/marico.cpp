#include <stdlib.h>
#include <stdio.h>

#define add(a)  (a) + (a)
#define double_(a) a * a
#define do_ 1 + 2 \
	+2
#define  a [
#define b ]
#define q {
#define c }
#define io do_ + 1
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define Malloc_(n,type) \
	(type *)malloc((n) * sizeof(type))

int qfw = 1;

#if qfw
printf("Hello");
#endif

void test_marico() {
	int x = 1, y = 2;
	MAX(x++,y++);
	printf("%d,&d",x,y);
	// (x++) > (y++) ? (x++) : (y++)
	// 2 > 2 ? 2 + 1 : 2 + 1
	// 2,3
}


