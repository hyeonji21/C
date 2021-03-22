#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[20];
    int i;
    int cnt = 0;

	printf("문자열(입력): ");
	
    for (i = 0; i < 20; i++) {

        scanf("%c", &arr[i]);


        if (arr[i] == '\n') {
            break;
        }
        else {
            cnt += 1;
        }

        if (arr[i] >= 97 && arr[i] <= 122) {
            arr[i] = arr[i] - 32;
        }

    }
	
	printf("\n");
	printf("문자열(출력): ");

	for (i = 0; i < cnt; i++) {

        printf("%c", arr[i]);
	}

	return 0;

}
