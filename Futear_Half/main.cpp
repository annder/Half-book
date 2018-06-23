#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

extern char print_line();
extern void print_all(char *filename,char *mode);
extern void write_file_char(char *filename, char word);
extern void delete_file(char *filename);
extern void rename_file(char *file_name, char *change_name);
extern void copyline(FILE *input, FILE *output);
extern char *get_string_file(FILE* filename);


int main() {
	FILE *a = fopen("c.txt", "r+");
	fseek(a, 2, 0);
	fflush(a);
	fputc('a',a);

};