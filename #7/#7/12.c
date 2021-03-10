// 12

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int grade[5][4] = { 
		{28, 28, 26, 9},
		{30, 27, 30, 10},
		{25, 26, 24, 8},
		{18, 22, 22, 5},
		{24, 25, 30, 10}
	}; 

	int i, k;
	int result[5] = { 0 };


	printf(" 		       중간   기말    팀플     출석     총점");
	printf("\n");
	
	for (i = 0; i < 5; i++) {

		for (k = 0; k < 4; k++) {

			result[i] += grade[i][k];

		}
	}

	for (i = 0; i < 5; i++) {

		printf("학생	%d번:		", i + 1);

		for (k = 0; k < 4; k++) {

			printf("%d	", grade[i][k]);

		}
		printf(" %d \n", result[i]);
	}

	double ar[4] = { 0 };

	
	for (k = 0; k < 4; k++) {

		for (i = 0; i < 5; i++) {

			ar[k] += grade[i][k];

		}

		ar[k] = ar[k] / 5;

	}

	printf("항목별 평균: ");
	printf("		");

	for (i = 0; i < 4; i++) {

		printf("%.1f	", ar[i]);

	}

	double sum = 0;

	for (i = 0; i < 5; i++) {
		sum += result[i];
	}
	
	printf(" %.1f", sum / 5);

	return 0;
}


