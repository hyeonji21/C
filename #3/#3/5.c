# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int fee, usage;

	printf("�⺻ ���? ");
	scanf("%d", &fee);

	printf("�� ��뷮(kwh)? ");
	scanf("%d", &usage);

	fee += usage * 190;

	printf("������: %d��", fee);

	return 0;
}