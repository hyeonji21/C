#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int usage;
	printf("�� ��뷮 (kmh)? ");
	scanf("%d", &usage);

	int a, b;      // �⺻����� a, ���·������ b


	if (usage <= 300) {
		a = 1000;
		b = usage * 100;
	}
	else {
		a = 5000;
		b = (300 * 100) + (usage - 300) * 200;
	}

	printf("���� ��� �հ�: %6d��\n", a + b);
	printf("  - �⺻���:   %6d��\n", a);
	printf("  - ���·����: %6d��\n", b);

	return 0;
}