#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mass, height, energy;

	printf("����(kg)? ");
	scanf("%lf", &mass);

	printf("����(m)? ");
	scanf("%lf", &height);

	energy = 9.8 * mass * height;

	printf("��ġ������: %.2lf \n", energy);

	return 0;
}