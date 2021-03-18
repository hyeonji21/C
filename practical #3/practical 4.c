#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	printf("입력 : ");
	scanf("%d", &a);

	printf("백의자리 : %d \n", a / 100);
	printf("십의자리 : %d \n", a % 100 / 10);
	printf("일의자리 : %d \n", a % 100 % 10);



	return 0;
}