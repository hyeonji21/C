#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int check;

	printf("두수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	check = (a > b) ? a : b;

	printf("큰수 : %d \n", check);


	return 0;
}