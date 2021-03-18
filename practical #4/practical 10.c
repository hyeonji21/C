#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int grade;
	scanf("%d", &grade);

	switch (grade) {

	case 1:
		printf("아주 잘했어요");
		break;

	case 2:
	case 3:
		printf("잘했어요");
		break;

	case 4:
	case 5:
		printf("노력해야 겠어요");
		break;

	case 6:
	case 7:
		printf("아주 많이 노력해야 겠어요");
		break;
	}


	return 0;
}