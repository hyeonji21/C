/* 3�� ���α׷����� ������ ����ü�� �̿��Ͽ� ����ڷκ��� �� ��ǥ ���� �Է¹޾� ����ü ������ �����ϰ�, 
�� ��ǥ ���� �Ÿ��� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� ���ϴ� �Լ��� double sqrt(double) �Լ��� �̿��� ��.#include <math.h> ����ؾ� ��. */

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct point {

	int x, y;

};

double sqrt1(double dx, double dy) {

	return sqrt((dx * dx) + (dy * dy));

}

int main(void)
{
	struct point pt1;
	struct point pt2;

	int a, b;
	int c = 0, d = 0;

	printf("pt1(x,y) ���� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	printf("pt2(x,y) ���� �Է��ϼ���: ");
	scanf("%d %d", &c, &d);

	pt1.x = a;
	pt1.y = b;

	pt2.x = c;
	pt2.y = d;

	double dx = pt2.x - pt1.x;
	double dy = pt2.y - pt1.y;

	printf("�� ��ǥ���� �Ÿ� : %lf \n", sqrt1(dx, dy));

	return 0;
}

