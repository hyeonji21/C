// 10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[10] = { 'O','O','O','O','O','O','O','O','O','O' };

	int i, count = 0;

	while (1) {

		printf("���� �¼�: [");
		for (i = 0; i < 10; i++) {
			printf("%c ", arr[i]);
		}
		printf("]\n");


		int x;

		printf("������ �¼���? ");
		scanf("%d", &x);

		if (count + x > 10) {
			printf("���� �¼����� %d�̹Ƿ� %d�¼��� ������ �� �����ϴ�.\n", 10 - count, x);
			break;
		}

		count += x;
		for (i = 0; i < 10; i++) {
			if (arr[i] == 'O') {
				for (int k = i; k < i + x; k++) {
					arr[k] = 'X';
					printf("%d ", k + 1);
						
				}
				printf("�� �¼��� �����߽��ϴ�.\n");
				break;
			}
		}
	}
	return 0;
}