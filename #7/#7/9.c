// 9
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x[3][3] = { {10,20,30}, {40,50,60}, {70,80,90} };
	int y[3][3] = { {9,8,7},{6,5,4},{3,2,1} };

	int i, a;

	int z[3][3];

	for (i = 0; i < 3; i++) {
		for (a = 0; a < 3; a++) {
			z[i][a] = x[i][a] + y[i][a];
		}
	}

	printf("x 행렬: \n");
	for (i = 0; i < 3; i++) {
		for (a = 0; a < 3; a++) {
			printf(" %d ", x[i][a]);
		}
		printf("\n");
	}

	printf("y 행렬: \n");
	for (i = 0; i < 3; i++) {
		for (a = 0; a < 3; a++) {
			printf(" %d ", y[i][a]);
		}
		printf("\n");
	}
	printf("x + y 행렬: \n");
	for (i = 0; i < 3; i++) {
		for (a = 0; a < 3; a++) {
			printf(" %d ", z[i][a]);
		}
		printf("\n");
	}
	return 0;
}