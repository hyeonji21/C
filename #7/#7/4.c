// 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	
	int i;
	printf("�迭: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	int x, cnt = 0;
	printf("ã�� ��? ");
	scanf("%d", &x);

	for (i = 9; i >= 0; i--) {
		if (arr[i] == x) {
			break;
		}
		if (i == 0) {
			if (arr[i] != x) {
				cnt += 1;
			}
		}
	}
	if (cnt == 1) {
		printf("���� ���� ���� ���Ҹ� ã�� �� ����.");
	}
	else {
		printf("%d�� %d��° �����Դϴ�.\n", x, i);
	}

	return 0;
}