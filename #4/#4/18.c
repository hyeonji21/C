#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("���� ����? ");
	scanf("%d", &num);

	int i;

	for (i = 2; i <= num; i++) {
		if (num % i == 0) {
			break;
		}
	}

	if (i == num)
		printf("%d�� �Ҽ��Դϴ�.", num);
	else 
		printf("%d�� �Ҽ��� �ƴմϴ�.", num);


	return 0;
}