// 8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int price[5];
	int after[5];
	int sale;

	printf("��ǰ�� 5���� �Է��ϼ���: ");
	scanf("%d %d %d %d %d", &price[0], &price[1], &price[2], &price[3], &price[4]);

	printf("������(%%)? ");
	scanf("%d", &sale);

	int i;
	for (i = 0; i < 5; i++) {
		printf("����:	%d	 -->  ", price[i]);
		after[i] = price[i] - (price[i] * sale / 100);
		printf("���ΰ�:	%d \n", after[i]);
	}

	return 0;
}