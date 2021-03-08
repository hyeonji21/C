#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num(int prime_num)
{
	int j, i;
	int count = 0;

	for (j = 2; j <= prime_num; j++) {
		for (i = 2; i <= j; i++) {
			if (j % i == 0) 
				break;
		}
		if (i == j) {
			printf("%3d ", i);
			count++;
			if (count % 10 == 0)
				printf("\n");
		}
	}
	
	return 0;
}



int main(void)
{
	int prime_num;

	printf("1~N 사이의 소수를 구합니다. N은? ");
	scanf("%d", &prime_num);

	get_num(prime_num);


	return 0;

}