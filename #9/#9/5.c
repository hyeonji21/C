// 12
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_arr(int* p, int*pp, int num)
{

	int i, cnt = 0;

	for (i = 0; i < 10; i++) {
		if (p[i] == num) {
			pp[cnt] = i;
			cnt += 1;
		}
	}

	if (cnt == 0) {
		return 0;
	}
	else {
		return cnt;
	}

}
int main(void)
{
	int arr[10] = { 12, 45, 62, 12, 99, 83, 23, 12, 72, 37 };
	int index[10];
	int num, i;

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("ã�� ��? ");
	scanf("%d", &num);

	int* p = arr;
	int* pp = index;

	int cnt = find_arr(p, pp, num);

	printf("ã�� �׸��� ��� %d���Դϴ�.", cnt);

	printf("\n");

	printf("ã�� �׸��� �ε���: ");
	
	for (i = 0; i < cnt; i++) {
		printf("%d ", pp[i]);
	}

	return 0;

}