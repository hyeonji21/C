# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price, rate, sale_price, sale;

	printf("��ǰ�� ����? ");
	scanf("%d", &price);

	
	printf("������(%%)? ");
	scanf("%d", &rate);

	sale_price = price - (price * (rate * 0.01));
	sale = price * (rate * 0.01);

	printf("���ΰ�: %d�� (%d�� ����)", sale_price , sale);


	return 0;
}