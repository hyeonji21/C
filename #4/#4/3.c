#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, change;
	printf("�� ������ �Է����ּ��� : ");
	scanf("%d %d", &a, &b);

	int sum = 0;

	if (a > b) {
		change = a;
		a = b;
		b = change;
	}

	int i = a;
	while (i <= b) {
		sum += i;
		i++;

	}
	printf("�� ���� ������ �� : %d", sum);

	return 0;
}