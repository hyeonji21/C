#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int a, b, change;
	printf("�� ������ �Է����ּ��� : ");
	scanf("%d %d", &a, &b);

	int sum1 = 0, sum2 = 0;

	if (a > b) {
		change = a;
		a = b;
		b = change;
	}

	int i = a;
	while (i <= b) {
		if (i % 2 != 0)
			sum1 += i;
		else
			sum2 += i;

		i++;
	}
	printf("Ȧ������ ���� ��: %d \n", sum1);
	printf("¦������ ���� ��: %d \n", sum2);

	return 0;
}