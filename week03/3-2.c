#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strcmp(const char str1[], const char str2[]) {
    for(int i=0;i<100;i++)
    {
        char a = str1[i];
        char b = str2[i];
        if (a >= 65 && a <= 90) 
        {
            a = a + 32;
        }
        if (b >= 65 && b <= 90)
        {
            b = b + 32;
        }
        if (a > b) 
        {
            return 1;
        }
        if (a < b)
        {
            return -1;
        }
        if (a == '\0')
        {
            return 0;
        }
    }
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