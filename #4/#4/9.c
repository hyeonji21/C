#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int rank, total_num;

	printf("���? ");
	scanf("%d", &rank);

	printf("��ü �ο���? ");
	scanf("%d", &total_num);

	if (rank <= total_num * 0.1)
		printf("����: A");
	else if (rank <= total_num * 0.3)
		printf("����: B");
	else if (rank <= total_num * 0.6)
		printf("����: C");
	else if (rank <= total_num * 0.9)
		printf("����: D");
	else
		printf("����: F");


	return 0;
}