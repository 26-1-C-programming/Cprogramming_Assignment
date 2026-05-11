#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strcmp(const char str1[], const char str2[]) {
    char c1, c2;
    int result;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {

        c1 = str1[i];
        c2 = str2[i];
        if (c1 == '\0' && c2 != '\0') {
            result = -1;
            break;
        }
        else if (c1 != '\0' && c2 == '\0') {
            result = 1;
            break;
        }
        else {
            result = 0;
        }
        if ('a' <= c1 && c1 <= 'z') {
            c1 -= 32;
        }
        if ('a' <= c2 && c2 <= 'z') {
            c2 -= 32;
        }
        if (c1 < c2) {
            result = -1;
            break;
        }
        else if (c1 > c2) {
            result = 1;
            break;
        }
        else
            result = 0;
    }
    return result;
}

int main() {
    char str1   [100] = { 0 };
    char str2[100] = { 0 };

    printf("첫 번째 문자열을 입력하시오 : ");
    scanf("%s", str1);
    printf("두 번째 문자열을 입력하시오 : ");
    scanf("%s", str2);

    if (strcmp(str1, str2) < 0) {
        printf("첫 번째 문자열이 먼저 온다.\n");
    }
    else if (strcmp(str1, str2) > 0) {
        printf("두 번째 문자열이 먼저 온다.\n");
    }
    else {
        printf("같은 문자열이다.\n");
    }

    return 0;
}