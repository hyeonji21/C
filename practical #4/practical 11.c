#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int rank;
	scanf("%d", &rank);


	switch (rank){
	case 1:
		printf("상패, 상금, 컴퓨터, 프린터");
		break;

	case 2:
		printf("상패, 상금, 컴퓨터");
		break;

	case 3:
		printf("상패, 상금");
		break;

	case 4:
		printf("상패");
		break;

	}


	return 0;
}