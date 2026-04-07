#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, c;

	printf("첫 번째 계산할 값을 입력하시오:");
	scanf("%d", &a);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈:");
	scanf("%d", &c);
	printf("두 번째 계산할 값을 입력하시오:");
	scanf("%d", &b);
		if (c == 1) {
			printf("%d + %d = %d", a,b,a+b);
		}
		else if (c == 2) {
			printf("%d - %d = %d", a, b, a - b);
		}
		else if (c == 3) {
			printf("%d * %d = %d", a, b, a * b);
		}
		else if (c == 4) {
			printf("%d / %d = %d", a, b, a / b);
		}
		return 0;
}