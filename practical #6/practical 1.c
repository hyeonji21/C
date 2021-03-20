#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print_star(int n)
{
	int i;

	for (i = 1; i <= n; i++) {
		printf("*");
	}

}

int main(void)
{
	Print_star(15);

	return 0;
}

