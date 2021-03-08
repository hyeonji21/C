# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int usage;
	int charge;

	printf("월 사용량(kwh)? ");
	scanf("%d", &usage);

	charge = usage * 190;

	printf("전기 요금: %d원", charge);


	
	return 0;
}
