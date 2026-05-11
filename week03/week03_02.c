#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a;
int b;
a = 0;
b = 0;
int strcmp(const char str1[], const char str2[]) {
    while (str1[a] != '\0') {

        a++;
    }
    while (str2[b] != '\0') {
        b++;
    }

    return a - b;
}

int main() {
    char str1[100] = { 0 };
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