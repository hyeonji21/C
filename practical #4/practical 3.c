#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int time, result;

	scanf("%d", &time);

	if (time <= 12) {
		printf("오전 %d시", time);
	}
	else {
		if (time == 13) {
			printf("오후 1시");
		}
		else if (time == 14) {
			printf("오후 2시");
		}
		else if (time == 15) {
			printf("오후 3시");
		}
		else if (time == 16) {
			printf("오후 4시");
		}
		else if (time == 17) {
			printf("오후 5시");
		}
		else if (time == 18) {
			printf("오후 6시");
		}
		else if (time == 19) {
			printf("오후 7시");
		}
		else if (time == 20) {
			printf("오후 8시");
		}
		else if (time == 21) {
			printf("오후 9시");
		}
		else if (time == 22) {
			printf("오후 10시");
		}
		else if (time == 23) {
			printf("오후 11시");
		}
		else{
			printf("오후 12시");
		}
	}


	return 0;
}