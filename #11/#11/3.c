/* x, y ��ǥ�� ������ �� �ִ� ����ü struct point { int x, y };�� �����ϰ�, 2���� point ����(pt1, pt2)�� �����Ѵ�.
����ڷκ��� pt1�� pt2 ��ǥ �� �Է¹޾Ƽ� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
pt1:(10, 20) pt2 : (5, 5)
��Ʈ : scanf(�� % d % d��, &pt1.x, &pt1.y); */

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {

	int x, y;
	
};

int main(void)
{
	struct point pt1;
	struct point pt2;

	printf("pt1(x,y) ���� �Է��ϼ���: ");
	scanf("%d %d", &pt1.x, &pt1.y);

	printf("pt2(x,y) ���� �Է��ϼ���: ");
	scanf("%d %d", &pt2.x, &pt2.y);

	printf("pt1:(%d, %d) ", pt1.x, pt1.y);
	printf("pt2:(%d, %d)", pt2.x, pt2.y);

	return 0;
}