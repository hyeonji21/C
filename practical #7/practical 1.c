#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int day[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	int i;

	for (i = 0; i < 12; i++) {
		printf("%d¿ùÀº %dÀÏ\n", i + 1, day[i]);
	}

	return 0;
}