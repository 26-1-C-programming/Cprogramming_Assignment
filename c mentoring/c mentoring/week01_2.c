#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("첫 번째 계산할 값:");
	scanf("%d", &a);
	printf("+ - * / ==> /");
	printf("두 번째 계산할 값:");
	scanf("%d", &b);
	if (b == 0) {
		printf("0으로는 나눌 수 없습니다");
	}
	else if (b != 0) {
		printf("%d / %d = %d", a, b, a / b);
	}
	return 0;
}