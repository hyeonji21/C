# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int usage;
	int charge;

	printf("�� ��뷮(kwh)? ");
	scanf("%d", &usage);

	charge = usage * 190;

	printf("���� ���: %d��", charge);


	
	return 0;
}
