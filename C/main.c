#include <stdio.h>

struct x {
	int a;
	char b[2];
	float c;
};

int main()
{
	struct x x1;

	x1.a = 5;
	x1.b[0] = 87;
	x1.b[1] = 0;
	x1.c = 5.01;

	printf("Int: %d, Char: %s, Float: %f", x1.a, x1.b, x1.c);

    return(0);
}
