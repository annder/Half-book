#include "stdio.h"
#include <ctype.h>

extern char print_line();
extern void print_all(char *filename,char *mode);
extern void write_file_char(char *filename, char word);

int main() {
	write_file_char("text.txt", 'Y');
	print_all("text.txt","r+");
};