/*�ڵ��� �̸� (���ڿ�), ���� ��ⷮ (����), ���� (����)�� ����� ���� ����ü�� �����ϰ�, 
����ڷκ���  3���� ������ �Է¹޾Ƽ� ����ü�� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

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

	printf("�ڵ����̸�? ");
	scanf("%s", &a.name);

	printf("���� ��ⷮ? ");
	scanf("%d", &a.num);

	printf("����? ");
	scanf("%d", &a.pride);

	printf("%s", a.name);
	printf("\n");
	printf("%d", a.num);
	printf("\n");
	printf("%d", a.pride);

	return 0;

}