#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void get_result(int integer)
{
	int count = 0;

	printf("%d�� ���: ", integer);

	for (int i = 1; i <= integer; i++) {
		if (integer % i == 0) {
			count += 1;
			printf("%d ", i);
		}
	}
	printf(" => �� %d��", count);
	

	printf("\n");

}


int main(void)
{
	while (1) {
		int integer;

		printf("���� ����? ");
		scanf("%d", &integer);

		if (integer > 0)
			get_result(integer);
		else
			return 1;

	}
	return 0;
}