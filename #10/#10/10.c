//10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int return_str(int hour, int min, int sec, char* pstr) {

    sprintf(pstr, "%2d:%2d:%02d", hour, min, sec);

    if (hour >= 0 && hour <= 24) {
        if (min >= 0 && min <= 60) {
            if (sec >= 0 && sec <= 60)
                return strlen(pstr);
            else
                return -1;
        }
        else
            return -1;
    }
    else
        return -1;
}


int main(void) {

    char str[SIZE] = "";
    int hour, min, sec;

    printf("시 분 초? ");
    scanf("%d %d %d", &hour, &min, &sec);

    int length = return_str(hour, min, sec, str);

    if (length == -1)
        printf("올바른 값이 아닙니다.\n");
    else
        puts(str);

    return 0;
}
