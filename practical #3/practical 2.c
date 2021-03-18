#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n = 100;

	printf("%d\n", ++n);  // 101   n에 먼저 1을 더한 후, 출력하기 때문에 101이 출력된다. (전위 증감 연산자)

	printf("%d\n", n++);  // 101   먼저 n을 출력한 후, n에 1을 더하기 때문에 출력값은 그대로 101이다. (후위 증감 연산자)

	printf("%d\n", n + 1);  // 103  위의 식까지 계산한 n의 값 102에 n + 1을 계산하면 103이므로 103이 출력된다.

	printf("%d\n", n);  // 102   n은 102로 변경된 상태이기 때문에 그대로 102가 출력된다.



	return 0;
}