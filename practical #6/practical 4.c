#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Is_Upper(char ch)
{

	if (ch >= 'A' && ch <= 'Z') {
		printf("%d", 1);
	}
	else {
		printf("%d", 0);
	}

}
int main(void)
{
	int ch;
	scanf("%c", &ch);

	Is_Upper(ch);


	return 0;
}