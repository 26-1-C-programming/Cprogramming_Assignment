//[4번 문제] 오류가 없는 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;
	char operator;
	printf("첫 번째 계산할 값 ==> ");
	scanf("%d", &num1);
	printf("+ - * / ==> ");
	scanf(" %c", &operator);
	printf("두 번째 계산할 값 ==> ");
	scanf("%d", &num2);

	float num3 = num2;

	if (operator == '+')
		printf("%d + %d = %d", num1, num2, num1 + num2);
	else if (operator == '-')
		printf("%d - %d = %d", num1, num2, num1 - num2);
	else if (operator == '*')
		printf("%d * %d = %d", num1, num2, num1 * num2);
	else if (num2 == 0)
		printf("0으로 나누면 안됩니다.");
	else if (operator == '/')
		printf("%d / %d = %f", num1, num2, num1 / num3);
	else
		printf("잘못된 연산자입니다.");

	return 0;
}