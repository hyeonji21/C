// 10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[10] = { 'O','O','O','O','O','O','O','O','O','O' };

	int i, count = 0;

	while (1) {

		printf("현재 좌석: [");
		for (i = 0; i < 10; i++) {
			printf("%c ", arr[i]);
		}
		printf("]\n");


		int x;

		printf("예매할 좌석수? ");
		scanf("%d", &x);

		if (count + x > 10) {
			printf("남은 좌석수가 %d이므로 %d좌석을 예매할 수 없습니다.\n", 10 - count, x);
			break;
		}

		count += x;
		for (i = 0; i < 10; i++) {
			if (arr[i] == 'O') {
				for (int k = i; k < i + x; k++) {
					arr[k] = 'X';
					printf("%d ", k + 1);
						
				}
				printf("번 좌석을 예매했습니다.\n");
				break;
			}
		}
	}
	return 0;
}