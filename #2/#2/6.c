#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double KRW, dollar; 

	printf("KRW? ");
	scanf("%lf", &KRW);

	printf("��/�޷� ȯ��? ");
	scanf("%lf", &dollar);


	printf("KRW %.lf = USD %.2lf \n", KRW, KRW / dollar);

	return 0;
}
