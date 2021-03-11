//6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp_ic(char* p1, char* p2)
{
    int n;

    for (int i = 0; p1[i] || p2[i]; i++) {
        if (toupper(p1[i]) != toupper(p2[i])) {
            return toupper(p1[i]) - toupper(p2[i]);
        }
    }
    return 0;
}

int main(void)
{
    char lhs[128] = "";
    char rhs[128] = "";
    int n;

    printf("ù ��° ���ڿ� ? ");
    gets_s(lhs, sizeof(lhs));

    printf("�� ��° ���ڿ� ? ");
    gets_s(rhs, sizeof(rhs));

    n = strcmp_ic(lhs, rhs);

    if (n > 0)
        printf("%s > %s\n", lhs, rhs);
    else if (n == 0)
        printf("%s == %s\n", lhs, rhs);
    else
        printf("%s < %s\n", lhs, rhs);

    return 0;

}