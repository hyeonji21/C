# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mass, speed, energy;

	printf("����(kg)? ");
	scanf("%lf", &mass);

	printf("�ӷ�(m/s)? ");
	scanf("%lf", &speed);

	energy = 0.5 * mass * (speed * speed);

	printf("�������: %.2lf", energy);
	

	return 0;
}