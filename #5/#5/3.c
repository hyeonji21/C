#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double length_distance(double x1, double y1, double x2, double y2)
{
	
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

}

int main(void)
{
	double x1, y1, x2, y2;

	printf("������ ������ ��ǥ? ");
	scanf("%lf %lf", &x1, &y1);

	printf("������ ���� ��ǥ? ");
	scanf_s("%lf %lf", &x2, &y2);

	printf("(%.f, %.f)~(%.f, %.f) ������ ����: %lf", x1, y1, x2, y2, length_distance(x1, y1, x2, y2));

	return 0;

}