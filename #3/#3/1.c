#include <stdio.h>

int main(void)
{
	int x;

	printf("y = 2x^2 + 5x + 3 \n");
	printf("x ���� �Է��ϼ��� :  ");
	scanf_s("%d", &x);

	printf("y = %d \n", 2 * x * x + 5 * x + 3 );


	return 0;
}