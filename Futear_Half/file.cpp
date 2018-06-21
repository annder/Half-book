#include <stdio.h>
#include <stdlib.h>

char print_line() {
	FILE *fp = fopen("hello.txt", "r");
	char ch;
	ch = fgetc(fp);
	return ch;
}

void print_all(char *filename,char *mode) {
	FILE *fp = fopen(filename, mode);
	char ch;
	while ((!feof(fp)))
	{
		ch = fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
};

void write_file_char(char *filename,char word) {
	FILE *pf = fopen(filename, "w+");
	fputc(word, pf);
	fclose(pf);
};