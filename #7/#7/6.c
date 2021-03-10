// 6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fill_arr(int arr[], int size, int num) {
	
	int i;

	for (i = 0; i < size; i++) {
		arr[i] = num;
		return arr[i];
	}

}
int main(void) {

	int arr[] = { 0 };
	int size = 20;
	int num;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);
	
	for (int i = 0; i < 20; i++) {
		printf("%d ", fill_arr(arr, 20, 1));
	}

}