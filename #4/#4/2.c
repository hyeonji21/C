#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	int a, b, change;

	printf("�� ������ �Է����ּ��� : ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		change = a;
		a = b;
		b = change;
	}

	for (i = a; i <= b; i++){
		sum += i;
	}

	printf("�� ���� ������ �� : %d", sum);


	return 0;
}