#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);

	if (a > 0) 
		printf("%d는 양의 값입니다.", a);
	else
		printf("%d는 음의 값입니다.\n", a);

	return 0;
}
