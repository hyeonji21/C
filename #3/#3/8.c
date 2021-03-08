# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double mass, speed, energy;

	printf("질량(kg)? ");
	scanf("%lf", &mass);

	printf("속력(m/s)? ");
	scanf("%lf", &speed);

	energy = 0.5 * mass * (speed * speed);

	printf("운동에너지: %.2lf", energy);
	

	return 0;
}