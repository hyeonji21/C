/*학번 (정수), 이름 (문자열), 평점 (실수)을 멤버로 갖는 구조체를 정의하고, 사용자로부터 3가지 정보를 입력받아서 
구조체에 저장하고 출력하는 프로그램을 작성하시오.*/

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct infor {
	int num;
	char name[10];
	double grade;
};

int main(void)
{
	struct infor a;

	printf("학번? ");
	scanf("%d", &a.num);

	printf("이름? ");
	scanf("%s", &a.name);

	printf("평점? ");
	scanf("%lf", &a.grade);

	printf("%d \n", a.num);
	printf("%s \n", a.name);
	printf("%lf \n", a.grade);

	return 0;
}