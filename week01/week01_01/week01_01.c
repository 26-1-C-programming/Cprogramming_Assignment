#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    //삼각형 판별
    int num1, num2, num3;
    printf("세 변의 길이를 입력해 주세요 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 <= 0 || num2 <= 0 || num3 <= 0) {
        printf("잘못된 입력입니다.");
    }
    else {
        if (num1 >= num2 + num3 || num2 >= num1 + num3 || num3 >= num2 + num1) {
            printf("삼각형이 아닙니다.");
        }
        else {
            printf("삼각형입니다.");
        }
    }

    return 0;
}