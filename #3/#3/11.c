# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, rate, sale_price, sale;

	printf("제품의 가격? ");
	scanf("%d", &price);

	
	printf("할인율(%%)? ");
	scanf("%d", &rate);

	sale_price = price - (price * (rate * 0.01));
	sale = price * (rate * 0.01);

	printf("할인가: %d원 (%d원 할인)", sale_price , sale);


	return 0;
}