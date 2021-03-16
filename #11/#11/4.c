/* 3번 프로그램에서 정의한 구조체를 이용하여 사용자로부터 두 좌표 값을 입력받아 구조체 변수에 저장하고, 
두 좌표 간의 거리를 계산하여 출력하는 프로그램을 작성하시오.
제곱근을 구하는 함수는 double sqrt(double) 함수를 이용할 것.#include <math.h> 사용해야 함. */

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

	printf("pt1(x,y) 값을 입력하세요: ");
	scanf("%d %d", &a, &b);

	printf("pt2(x,y) 값을 입력하세요: ");
	scanf("%d %d", &c, &d);

	pt1.x = a;
	pt1.y = b;

	pt2.x = c;
	pt2.y = d;

	double dx = pt2.x - pt1.x;
	double dy = pt2.y - pt1.y;

	printf("두 좌표간의 거리 : %lf \n", sqrt1(dx, dy));

	return 0;
}

