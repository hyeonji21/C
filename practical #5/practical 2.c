#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int i;
	int sum = 0, n = 0;

	for (i = 1; i <= 10; i++) {
		
		sum += i;
		
		printf("%d			%d \n",i, sum);   
		

	}


	return 0;

}