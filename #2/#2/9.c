#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double m2;
	const double area = 0.3025;

	printf("����Ʈ�� ����(��������)? ");
	scanf("%lf", &m2);

	printf("%.2lf �������� = %.2lf ��", m2, m2 * area);


	return 0;
}