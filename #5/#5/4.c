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
	printf("������(%%)? ");
	scanf("%d", &a);

	while (1) {

		int b;

		printf("��ǰ�� ����? ");
		scanf("%d", &b);

		if (b == 0)
			return 1;

		printf("���ΰ�: %d�� \n", get_price(b, a));


	}

	return 0;
}