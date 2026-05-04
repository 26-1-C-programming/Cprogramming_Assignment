#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strlen(const char str[]) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}

int main() {
    char string[100] = { 0 };

    printf("문자열을 입력하시오 : ");
    scanf("%[^\n]s", string);

    printf("문자열의 길이 : %d", strlen(string));

    return 0;
}