#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[4][10] = { "영업1과", "영업2과", "판촉과", "인사과"};

	int i, j;
	int a, num;

	printf("사원코드 : ");
	scanf("%d", &a);

	num = (a / 100);

	printf("과명 : ");

	printf("%s", arr[num - 1]);


	printf("        사원번호 : %d", a % 100);

	return 0;

}