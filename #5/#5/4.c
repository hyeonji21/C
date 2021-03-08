#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_price(int price, int discount)
{
	int result = price - (price * (discount * 0.01));

	return result;
}

int main(void)
{

	int a;
	printf("할인율(%%)? ");
	scanf("%d", &a);

	while (1) {

		int b;

		printf("제품의 가격? ");
		scanf("%d", &b);

		if (b == 0)
			return 1;

		printf("할인가: %d원 \n", get_price(b, a));


	}

	return 0;
}