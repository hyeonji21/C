#include <stdio.h>

int main(void)
{

	int arr[3][4];

	int i, j;


	printf("\n * |  0  1  2  3");
	printf("\n --|------------");

	for (i = 0; i < 3; i++) {
		printf("\n %d |" , i);
		for (j = 0; j < 4; j++) {
			printf("%3d", i * j);
		}
	}
	

	return 0;
}