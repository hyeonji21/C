/* x, y 좌표를 저장할 수 있는 구조체 struct point { int x, y };를 정의하고, 2개의 point 변수(pt1, pt2)를 선언한다.
사용자로부터 pt1과 pt2 좌표 값 입력받아서 아래와 같이 출력하는 프로그램을 작성하시오.
pt1:(10, 20) pt2 : (5, 5)
힌트 : scanf(“ % d % d”, &pt1.x, &pt1.y); */

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {

	int x, y;
	
};

int main(void)
{
	struct point pt1;
	struct point pt2;

	printf("pt1(x,y) 값을 입력하세요: ");
	scanf("%d %d", &pt1.x, &pt1.y);

	printf("pt2(x,y) 값을 입력하세요: ");
	scanf("%d %d", &pt2.x, &pt2.y);

	printf("pt1:(%d, %d) ", pt1.x, pt1.y);
	printf("pt2:(%d, %d)", pt2.x, pt2.y);

	return 0;
}