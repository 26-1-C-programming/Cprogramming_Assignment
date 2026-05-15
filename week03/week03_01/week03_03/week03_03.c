#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strlen(const char string[]) {
    int b = 0;
    int i = 0;
    while (string[i] != '\0') {
        b++;
        i++;
    }
    return b;
}

int main() {
    char string[100] = { 0 };

    printf("문자열을 입력하시오 : ");
    scanf("%s", string);

    printf("문자열의 길이 : %d", strlen(string));

    return 0;
}