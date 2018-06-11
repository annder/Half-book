#include <stdio.h>
#include "NodeList.h";
#include <stdlib.h>
#include <ctype.h>
#include <string>
#include "Func_Strue.h";

int f(int) {
	return 1;
};

Node *Seach_Element(int (*compare)(void const *,void const *)) {
	//...
	Node *result;
	result = (Node *)malloc(sizeof(Node));
	return result;
};

int compare_value(void const *a,void const *b) {
	if (*(int *)a == *(int *)b) {
		return true;
	}
	else {
		return false;
	}
};

void Operate()
{
	int(*pf)(int) = &f;
	int ans;
	ans = f(12);
	ans = (*pf)(13);
	ans = pf(13);
};

//////////////////////////////////////////////////

int isControal_String(std::string value) 
{
	char Store_[6] = { '\a' ,'\f','\r','\v','\"' };
	int result = 0;
	int  size = sizeof(Store_) / sizeof(char *);
	for (auto &string_ : value) {
		for (int i = 0; i < size; i++) {
			if (string_ == Store_[i]) {
				result++;
			}
		}
	}
	return result;
}

int isWhite_String(std::string string_)
{
	int result = 0;
	for (auto &char_ : string_) {
		char_ == ' ' ? result++ : result;
	}
	return result;
};

int isUpperCase_String(std::string string_) 
{
	int result = 0;
	for (auto &char_ : string_) {
		isupper((int)char_) != 0 ? result++ : result;
	}
	return result;
};

int isLowwerCase_String(std::string string_) 
{
	int result = 0;
	for (auto &char_: string_) 
	{
		isupper((int)char_) != 0 ? result ++ :result;
	}
	return result;
}

int isSymbol_String(std::string string_) 
{
	// = 为拷贝的作用于...
	
	int result = 0;
	char store_symbol_calculate[5] = { '+','-','*','/','%' };
	// Should ++
	char store_symbol_relation[6] = { '>','<' ,'=' ,'!'};
	// Should  !=  ==
	char store_symbol_logic[4] = { '&','|','!' , '='};
	// Should && , || , !=
	char store_symbol_position[6] = {'~','^'};
	// Should  << , >>
	char store_symbol_condition[2] = { '?',':' };

	char pointer_symbol = '*';
	///////////////////////////////////////////
	auto counter_result = [&](char iteration) {
		for (auto &value_string : string_) {
			if (iteration == value_string ) {
				result++;
			};
		};
	};
	for (auto &element_ :store_symbol_calculate) {
		counter_result(element_);
	};
	for (auto &element_ :store_symbol_relation) {
		counter_result(element_);
	};
	for (auto &element_:store_symbol_logic) {
		counter_result(element_);
	};
	for (auto &element : store_symbol_position) {
		counter_result(element);
	};
	for (auto &element_ : store_symbol_condition) {
		counter_result(element_);
	};
	// Should using itercation;
	return result;
	const char *to_C_style = string_.c_str();
	while (*to_C_style++ == '\0') {
		result++;
	};
	return result;
};

void avgage(std::string value) {
	int Control_String = isControal_String(value);
	int White_String = isWhite_String(value);
	int UpperCase_String = isUpperCase_String(value);
	int LowwerCase_String = isLowwerCase_String(value);
	int Symbol_String = isSymbol_String(value);
	int String_Lenght = value.length();
	printf("Controal Strning:%f", String_Lenght / Control_String);
	printf("White_String:%f", String_Lenght / White_String);
	printf("Upper_Case:%f", String_Lenght / UpperCase_String);
	printf("Lowwer_Case:%f", String_Lenght / LowwerCase_String);
	printf("Symob_String: %f", String_Lenght / Symbol_String);
};

void traverse_node_link(func_struct *frist_point,func_struct (*operate)(func_struct *current_node)) {
	frist_point = (func_struct *)malloc(sizeof(func_struct));
	frist_point = frist_point->next;
	//...ok
	operate(frist_point);
};

////////////////

void delete_trans(func_struct *list, int value) {};
void search(func_struct *list, func_struct *current) {};
void edit(func_struct *list, func_struct * current) {};

void(*store_opreate[])(func_struct *list, func_struct *current) = {search,edit};
void(*transform_table[])(func_struct *list,int value) = {delete_trans};

///////////////

int toASCII(void *io) {
	char *value;
	if (iscntrl((int)io)) {
	 value = (char *)io;
	};
	if (sizeof(io)) {
		return (int)(io);
	}
	if (isalnum((int)io)) {
		return (int)io + 48;
	}
	return (int)value[0];
};

void compare_(void *compare_value, void *compare_) {
	int _value_a = toASCII(compare_value),
		_value_b = toASCII(compare_);
	int temp;
	if (_value_a < _value_b) {
		temp = _value_a;
		_value_a = _value_b;
		_value_b = temp;
	};
		
};

void Any_sort(void *array_pointer,int array_len, int array_element_len, void (*compare_func)(void *compare_value,void *compare__)) {
	int *pointer_int;
	char *pointer_char;
	if (isalnum((int)array_pointer)) {
		pointer_int = (int*)array_pointer;
	};
	if (iscntrl((int)array_pointer)) {
		pointer_char = (char *)array_pointer;
	};
	// compare_should_transform

	compare_func(pointer_char,pointer_char+1);
};
