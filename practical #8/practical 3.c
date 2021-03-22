#include <stdio.h>

int main(void)
{
	int arr[4][4] = { 1, 0, 0, 0, 2, 3, 0, 0, 4, 5, 6, 0, 7, 8, 9, 10 };

	int i, j;

	for (i = 0; i < 4; i++) {
		if (i != 0) {
			printf("\n");
		}
		for (j = 0; j < 4; j++) {
			printf("  %2d", arr[i][j]);
		}
	}


	return 0;

}