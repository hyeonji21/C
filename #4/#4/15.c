#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int count = 0;


	for (i = 32; i <= 126; i++) {
		printf("%c ", i);
		count++;
		if (count % 24 == 0) {
			printf("\n");
		}

	}


	return 0;
}