int isChar(int char_) {
	if (char_ > 32 && char_ < 90) {
		return 1;
	}
	return 0;
};

int isString(void *string_) {
	char *result = (char*)string_;
	if (sizeof(result) == 4) {
		return 1;
	}
	return 0;
}
