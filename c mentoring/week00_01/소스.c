#include <stdio.h>

int main(void) {
    int a, b, c, d;
    int sum;

    printf("첫 번째 계산할 값을 입력하세요: ");
    scanf("%d", &a); 

    printf("두 번째 계산할 값을 입력하세요: ");
    scanf("%d", &b);

    printf("세 번째 계산할 값을 입력하세요: ");
    scanf("%d", &c);

    printf("네 번째 계산할 값을 입력하세요: ");
    scanf("%d", &d);

    sum = a + b + c + d;

    printf("합계: %d\n", sum);

    return 0;
}