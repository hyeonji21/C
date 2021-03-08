#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mass, height, energy;

	printf("질량(kg)? ");
	scanf("%lf", &mass);

	printf("높이(m)? ");
	scanf("%lf", &height);

	energy = 9.8 * mass * height;

	printf("위치에너지: %.2lf \n", energy);

	return 0;
}