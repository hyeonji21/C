// 8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price[5];
	int after[5];
	int sale;

	printf("상품가 5개를 입력하세요: ");
	scanf("%d %d %d %d %d", &price[0], &price[1], &price[2], &price[3], &price[4]);

	printf("할인율(%%)? ");
	scanf("%d", &sale);

	int i;
	for (i = 0; i < 5; i++) {
		printf("가격:	%d	 -->  ", price[i]);
		after[i] = price[i] - (price[i] * sale / 100);
		printf("할인가:	%d \n", after[i]);
	}

	return 0;
}