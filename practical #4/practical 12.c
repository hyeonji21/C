#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a;
	int num1, num2;
	int result;

	printf("입력(연산기호, 숫자, 숫자) : ");
	scanf("%c %d %d", &a, &num1, &num2);

	if (a == '+') {
		result = num1 + num2;
	}
	else if (a == '-') {
		result = num1 - num2;
	}
	else if (a == '*') {
		result = num1 * num2;
	}
	else
		result = num1 / num2;


	printf("연산 결과 : %d", result);




	return 0;
}