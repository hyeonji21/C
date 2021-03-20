#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Sign(int n)
{
	if (n >= 0) {
		printf("%d", 1);
	}
	else {
		printf("%d", 0);

	}
}
int main(void)
{
	int n;
	scanf("%d", &n);

	Sign(n);

	return 0;

}