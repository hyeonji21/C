#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float korean, english, math;
	float avg;

	printf("국어: ");
	scanf("%f", &korean);

	printf("영어: ");
	scanf("%f", &english);

	printf("수학: ");
	scanf("%f", &math);

	printf("\n");

	avg = (korean + math + english) / 3;

	printf("평균 %.1f", avg);


	return 0;
}