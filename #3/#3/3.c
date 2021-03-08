# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float mass, volume, density;
	
	printf("질량(g)? ");
	scanf("%f", &mass);

	printf("부피(세제곱센티미터)? ");
	scanf("%f", &volume);

	density = mass / volume;

	printf("밀도 : %f", density);

	return 0;
}