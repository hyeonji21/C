#include <stdio.h>

struct program {
	int a;
	int b;
};



int main(void)
{

	struct program list = { 4, 5 };

	printf("%d + %di", list.a, list.b);

	return 0;
}