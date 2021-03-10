// 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 12, 37 };
	
	int i;
	printf("배열: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	int x, cnt = 0;
	printf("찾을 값? ");
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
		printf("같은 값을 가진 원소를 찾을 수 없다.");
	}
	else {
		printf("%d는 %d번째 원소입니다.\n", x, i);
	}

	return 0;
}