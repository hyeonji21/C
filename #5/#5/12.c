#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int result;

void calculation(char connect, int num)
{
	
	switch (connect)
	{
	case '+' :
		result += num;
		break;

	case '-' :
		result -= num;
		break;

	case '*' :
		result *= num;
		break;

	case '/' :
		result /= num;
		break;

	default :
		break;
			
	}

	printf("= %d ", result);
	
}



int main(void)
{
	char connect;
	int num;

	printf("0 ");

	while(1) {

		scanf("%c %d", &connect, &num);

		if ((connect == '0') && (num == 0))
			break;
		else
			calculation(connect, num);

	}

	return 0;
	
}
