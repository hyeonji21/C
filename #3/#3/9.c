# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int mass1, mass2;       // mass1 : ����� ����, mass2 : ������ ����
	
	printf("���(g)? ");
	scanf("%d", &mass1);

	printf("����(g)? ");
	scanf("%d", &mass2);


	printf("��: %.2lf %%", (double) mass2 / (mass1 + mass2) * 100);


	return 0;
}