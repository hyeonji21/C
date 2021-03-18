#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double price, count;
	double result = 0;

	printf("물건값 : ");
	scanf("%lf", &price);

	printf("개 수 : ");
	scanf("%lf", &count);
	

	if ((price * count) < 5000) {
		result = price * count;
	}
	else {
		result = (price * count) - (price * count * 0.1);
	}

	printf("금 액 : %.f", result);


	return 0;
}