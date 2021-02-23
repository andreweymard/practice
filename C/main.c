#include <stdio.h>

int main() {
	char* lol = (char*)malloc(sizeof(char) * 1975000000);

	if (lol == NULL) {
		printf("=Memory not allocated\nFailure");
		return 1;
	}
	else {
		printf("Success");
		free(lol);
		return 0;
	}
}
