#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

extern char print_line();
extern void print_all(char *filename, char *mode);
extern void write_file_char(char *filename, char word);
extern void delete_file(char *filename);
extern void rename_file(char *file_name, char *change_name);
extern void copyline(FILE *input, FILE *output);
extern char *get_string_file(FILE *filename);
extern void scanf_printf_copy(char *entry_type);
extern void scanf_printf_forty_length(char *entry_type);

int main()
{
	scanf_printf_copy("int");
	scanf_printf_forty_length("int");
};
