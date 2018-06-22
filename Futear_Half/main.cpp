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
	char o[12];
	FILE *fp = fopen("c.txt","w+");
	fscanf(fp, "%s", o);
	printf("%d\n", o);
	fclose(fp);
};