# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int fee, usage;

	printf("기본 요금? ");
	scanf("%d", &fee);

	printf("월 사용량(kwh)? ");
	scanf("%d", &usage);

	fee += usage * 190;

	printf("전기요금: %d원", fee);

	return 0;
}