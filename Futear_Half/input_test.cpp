#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define number_format "%d"
#define char_format "%c"
#define string_format "%s"
#define double_format "%lf"
#define float_format "%f"
#define string_size(value) sizeof(value) / sizeof(char *)
#define number_size(value) sizeof(value) / sizeof(int)

// !!Bug��Entry repeat value for 4 per is break!
void scanf_printf_copy(char *entry_type)
{
	typedef struct type
	{
		char *string = "string";
		char *int_ = "int";
		char *float_ = "float";
		char *double_ = "double";
		char *char_ = "char";
	} type;
	type type;
	if (strcmp(entry_type, type.char_))
	{
		char value;
		scanf(char_format, &value);
		printf(char_format, value);
	};
	if (strcmp(entry_type, type.double_))
	{
		double value;
		scanf(double_format, &value);
		printf(double_format, value);
	};
	if (strcmp(entry_type, type.float_))
	{
		float value;
		scanf(float_format, &value);
		printf(float_format, value);
	};
	if (strcmp(entry_type, type.int_))
	{
		int value;
		scanf(number_format, &value);
		printf(number_format, value);
	};
	if (strcmp(entry_type, type.string))
	{
		char *value;
		scanf(string_format, &value);
		printf(string_format, value);
	};
};

void scanf_printf_forty_length(char *entry_type)
{
	char *char_ = "string";
	char *int_ = "int";
	if (strcmp(entry_type, int_))
	{
		int value;
		scanf(number_format, &value);
		int value_lenght = number_size(value);
		if (value_lenght < 40)
		{
			printf(number_format, value);
		}
		else
		{
			printf("Pls type number don't overflow 40 chars!");
		};
	}
	if (strcmp(entry_type, char_))
	{
		char *value;
		scanf(string_format, &value);
		int value_lenght = string_size(value);
		if (value_lenght < 40)
		{
			printf(string_format, value);
		}
		else
		{
			printf("Pls type string don't overflow 40 chaars!");
		}
	}
};