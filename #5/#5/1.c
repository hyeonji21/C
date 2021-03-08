#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void multiple(int integer, int num)
{
	int result;
	
	for (int i = 1; i <= num; i++) {
		result = integer * i;
		printf("%d ", result);
	}
}

int main(void)
{
	while (1) {

		int integer;
		printf("Á¤¼ö? ");
		scanf("%d", &integer);


		if (integer > 0) {
			multiple(integer, 20);
			printf("\n");
		}
		else
			return 1;

	}

	return 0;

}
