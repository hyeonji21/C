/*자동차 이름 (문자열), 엔진 배기량 (정수), 가격 (정수)을 멤버로 갖는 구조체를 정의하고, 
사용자로부터  3가지 정보를 입력받아서 구조체에 저장하고 출력하는 프로그램을 작성하시오.*/

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct infor {
	char name[10];
	int num;
	int pride;
};

int main(void)
{
	struct infor a;

	printf("자동차이름? ");
	scanf("%s", &a.name);

	printf("엔진 배기량? ");
	scanf("%d", &a.num);

	printf("가격? ");
	scanf("%d", &a.pride);

	printf("%s", a.name);
	printf("\n");
	printf("%d", a.num);
	printf("\n");
	printf("%d", a.pride);

	return 0;

}