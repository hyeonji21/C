# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month, result;

	printf("�� ��? ");
	scanf("%d", &month);

	result = month >= 1 && month <= 12 ? printf("�ùٸ� ���Դϴ�.") : printf("�߸��� ���Դϴ�.");


	return 0;
}