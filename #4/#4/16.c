#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int integer, count;
	int i;

	printf("���� ����? ");
	scanf("%d", &integer);

	printf("����� ����? ");
	scanf("%d", &count);

	for (i = 1; i <= count; i++) {
		printf("%d ", integer* i);
	}


	return 0;
}