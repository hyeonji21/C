//7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int validtime(const char* time) {

    int hour, minute, second;

    sscanf(time, "%2d%2d%2d", &hour, &minute, &second);

    if (hour >= 0 && hour <= 24) {
        if (minute >= 0 && minute <= 60) {
            if (second >= 0 && second <= 60) {
                return 0;
            }
            return 1;
        }
        return 1;
    }
    return 1;
}

int main(void) {

    char time[SIZE] = "";

    int hour = 0, minute = 0, second = 0;

    while (1) {
        printf("�ð�(.�Է½� ����)? ");
        gets_s(time, sizeof(time));

        if (time[0] == '.')
            break;

        if (validtime(time) == 0) {
            sscanf(time, "%2d%2d%2d", &hour, &minute, &second);
            printf("%2d:%2d:%2d�� ��ȿ�� �ð��Դϴ�.\n", hour, minute, second);
        }

        else if (validtime(time) == 1) {
            printf("�߸� �Է��ϼ̽��ϴ�. hhmmss�������� �Է��ϼ���\n");
        }
    }
    return 0;
}
