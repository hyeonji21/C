/*�й� (����), �̸� (���ڿ�), ���� (�Ǽ�)�� ����� ���� ����ü�� �����ϰ�, ����ڷκ��� 3���� ������ �Է¹޾Ƽ� 
����ü�� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

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

	printf("�й�? ");
	scanf("%d", &a.num);

	printf("�̸�? ");
	scanf("%s", &a.name);

	printf("����? ");
	scanf("%lf", &a.grade);

	printf("%d \n", a.num);
	printf("%s \n", a.name);
	printf("%lf \n", a.grade);

	return 0;
}