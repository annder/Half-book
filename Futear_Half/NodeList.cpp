#include <stdio.h>
typedef struct {
	int val;
	Node *next = nullptr;
} Node;

void add_struct(int element) {
	Node *io;
	while (io->next != nullptr);
	io->val = element;
	io->next = io;
};
void print_struct_el(Node *val) {
	while (val->next != nullptr){
		printf("%d", val->val);
	};
};
