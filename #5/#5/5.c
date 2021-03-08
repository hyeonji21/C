#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void menu(void)
{

	printf("[1.파일 열기  2.파일 저장  3.인쇄  0.종료] 선택? ");

}


int main(void)
{
	while (1) {
		int num;

		menu();
		scanf("%d", &num);


		if (num == 1)
			printf("파일 열기를 수행합니다.");
		else if (num == 2)
			printf("파일 저장을 수행합니다.");
		else if (num == 3)
			printf("인쇄를 수행합니다.");
		else
			break;

		printf("\n");
	}


	return 0;
}