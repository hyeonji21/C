#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int score;
	
	scanf("%d", &score);

	if (score == 1 || score == 2) {
		printf("아주 잘했어요");
	}
	else if (score == 3 || score == 4) {
		printf("잘했어요");
	}
	else if (score == 5 || score == 6) {
		printf("노력해야 겠어요");
	}
	else
		printf("아주 많이 노력해야 겠어요");



	return 0;


}