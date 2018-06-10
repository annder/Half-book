#include <stdio.h>
#include "NodeList.h";
#include <stdlib.h>
#include <ctype.h>
#include <string>

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

// Not !!

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