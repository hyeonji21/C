// 9
#define _CRT_SECURE_NO_WARNINGS                                   
#include <stdio.h>

void arr_num(int(*arr)[5], int num)
{

	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			arr[i][j] = num;
		}
	}
}
int main(void)
{
	int arr[3][5] = { 0 };
	int num;
	int i, j;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);

	arr_num(arr, num);

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	return 0;

}