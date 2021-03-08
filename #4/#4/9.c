#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int rank, total_num;

	printf("등수? ");
	scanf("%d", &rank);

	printf("전체 인원수? ");
	scanf("%d", &total_num);

	if (rank <= total_num * 0.1)
		printf("학점: A");
	else if (rank <= total_num * 0.3)
		printf("학점: B");
	else if (rank <= total_num * 0.6)
		printf("학점: C");
	else if (rank <= total_num * 0.9)
		printf("학점: D");
	else
		printf("학점: F");


	return 0;
}