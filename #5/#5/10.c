#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void get_result(int integer)
{
	int count = 0;

	printf("%d의 약수: ", integer);

	for (int i = 1; i <= integer; i++) {
		if (integer % i == 0) {
			count += 1;
			printf("%d ", i);
		}
	}
	printf(" => 총 %d개", count);
	

	printf("\n");

}


int main(void)
{
	while (1) {
		int integer;

		printf("양의 정수? ");
		scanf("%d", &integer);

		if (integer > 0)
			get_result(integer);
		else
			return 1;

	}
	return 0;
}