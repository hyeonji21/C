# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mass, volume, density;
	
	printf("����(g)? ");
	scanf("%f", &mass);

	printf("����(��������Ƽ����)? ");
	scanf("%f", &volume);

	density = mass / volume;

	printf("�е� : %f", density);

	return 0;
}