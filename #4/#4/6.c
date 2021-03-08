#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int i;

	for (i = 1; i <= 12; i++) {
		
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			printf("%d월의 마지막 날은 31일입니다.\n", i);

		else if (i == 2)
			printf("%d월의 마지막 날은 28일입니다.\n", i);

		else
			printf("%d월의 마지막 날은 30일입니다.\n", i);
		

	}

	return 0;
}


