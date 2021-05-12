#include <stdio.h>

struct program {
	char name[20];
	int number;
	int score;
};


int main(void)
{
	struct program list1 = { "홍길동", 94122001, 78 };
	struct program list2 = { "박문수", 94122002, 93 };
	struct program list3 = { "나보기", 94122003, 58 };
	 
	printf("이름\t  학번\t       점수\n");

	printf("%s\t%d\t%d\t", list1.name, list1.number, list1.score);

	int score = (list1.score * 2) / 10;

	switch (score) {
	case 20 :
		printf("A+");
		break;
	case 19 :
		printf("A0");
		break;
	case 18 :
		printf("A0");
		break;
	case 17 :
		printf("B+");
		break;
	case 16:
		printf("B0");
		break;
	case 15:
		printf("C+");
		break;
	case 14:
		printf("C0");
		break;
	case 13:
		printf("D+");
		break;
	case 12:
		printf("D0");
		break;
	default:
		printf("F");
			
	}

	printf("\n");

	printf("%s\t%d\t%d\t", list2.name, list2.number, list2.score);

	score = (list2.score * 2) / 10;

	switch (score) {
	case 20:
		printf("A+");
		break;
	case 19:
		printf("A0");
		break;
	case 18:
		printf("A0");
		break;
	case 17:
		printf("B+");
		break;
	case 16:
		printf("B0");
		break;
	case 15:
		printf("C+");
		break;
	case 14:
		printf("C0");
		break;
	case 13:
		printf("D+");
		break;
	case 12:
		printf("D0");
		break;
	default:
		printf("F");

	}

	printf("\n");

	printf("%s\t%d\t%d\t", list3.name, list3.number, list3.score);

	score = (list3.score * 2) / 10;

	switch (score) {
	case 20:
		printf("A+");
		break;
	case 19:
		printf("A0");
		break;
	case 18:
		printf("A0");
		break;
	case 17:
		printf("B+");
		break;
	case 16:
		printf("B0");
		break;
	case 15:
		printf("C+");
		break;
	case 14:
		printf("C0");
		break;
	case 13:
		printf("D+");
		break;
	case 12:
		printf("D0");
		break;
	default:
		printf("F");

	}


	return 0;

}