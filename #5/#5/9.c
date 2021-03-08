#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_print(int variable)
{
	int num1, num2, num3, num4, num5, num6, num7, num8;

	num1 = (variable >> 28) & 0x0000000f;

	num2 = (variable >> 24) & 0x0000000f;

	num3 = (variable >> 20) & 0x0000000f;

	num4 = (variable >> 16) & 0x0000000f;

	num5 = (variable >> 12) & 0x0000000f;

	num6 = (variable >> 8) & 0x0000000f;

	num7 = (variable >> 4) & 0x0000000f;

	num8 = variable & 0x0000000f;

	printf("16진수 %X: ", variable);
	printf("%d%d%d%d ", num1 / 2 / 2 / 2, num1 / 2 / 2 % 2, num1 / 2 % 2, num1 % 2);
	printf("%d%d%d%d ", num2 / 2 / 2 / 2, num2 / 2 / 2 % 2, num2 / 2 % 2, num2 % 2);
	printf("%d%d%d%d ", num3 / 2 / 2 / 2, num3 / 2 / 2 % 2, num3 / 2 % 2, num3 % 2);
	printf("%d%d%d%d ", num4 / 2 / 2 / 2, num4 / 2 / 2 % 2, num4 / 2 % 2, num4 % 2);
	printf("%d%d%d%d ", num5 / 2 / 2 / 2, num5 / 2 / 2 % 2, num5 / 2 % 2, num5 % 2);
	printf("%d%d%d%d ", num6 / 2 / 2 / 2, num6 / 2 / 2 % 2, num6 / 2 % 2, num6 % 2);
	printf("%d%d%d%d ", num7 / 2 / 2 / 2, num7 / 2 / 2 % 2, num7 / 2 % 2, num7 % 2);
	printf("%d%d%d%d ", num8 / 2 / 2 / 2, num8 / 2 / 2 % 2, num8 / 2 % 2, num8 % 2);

}

int main(void)
{
	int variable = 0;

	printf("정수? ");
	scanf("%x", &variable);

	get_print(variable);

	return 0;
}