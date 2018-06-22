#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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

void delete_file(char *file_name) {
	remove(file_name);
}

void rename_file (char *file_name,char *change_name){
	rename(file_name,change_name);
}


///////
///主要是退回到流中///
int read_int() {
	int value;
	int ch;
	value = 0;
	while ((ch = getchar())!= EOF && isdigit(ch)) {
		value *= 10;
		value += ch - '0';
	}
	ungetc(ch, stdin);
	return value;
}

#define MAX_LINE_LENGHT 1024
void copyline(FILE *input, FILE *output) {
	char buffer[MAX_LINE_LENGHT];
	// MAX_LINE_LENGHT就是读取buffer的内存
	while (fgets(buffer,MAX_LINE_LENGHT,input) != NULL)
	{
		fputs(buffer, output);
	}
};

//Then, i write a function to sever a string.

char *get_string_file(FILE* filename) {
	#define  MAX_LENGHT 1024	
	char result[MAX_LENGHT];
	while ((fgets(result, MAX_LINE_LENGHT, filename))!= NULL);
	return result;
};

