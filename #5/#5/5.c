#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu(void)
{

	printf("[1.���� ����  2.���� ����  3.�μ�  0.����] ����? ");

}


int main(void)
{
	while (1) {
		int num;

		menu();
		scanf("%d", &num);


		if (num == 1)
			printf("���� ���⸦ �����մϴ�.");
		else if (num == 2)
			printf("���� ������ �����մϴ�.");
		else if (num == 3)
			printf("�μ⸦ �����մϴ�.");
		else
			break;

		printf("\n");
	}


	return 0;
}