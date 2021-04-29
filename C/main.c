#include <stdio.h>
#pragma warning(disable : 4996)

struct MyStruct {
	int number;
};

int main() {
	struct MyStruct* ptr;
	struct MyStruct test;

	ptr = &test;

	test.number = 5;
	printf("test number = %d", test.number);

	(*ptr).number = 6;
	printf("\ntest number = %d", test.number);

	ptr->number = 7;
	printf("\ntest number = %d", test.number);

	return 0;
}
