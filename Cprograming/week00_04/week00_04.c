//[4번 문제]오류가 없는 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//변수 선언
	int num1, num2;
	char operator;
	//값 입력
	printf("첫 번째 계산할 값 ==> ");
	scanf("%d", &num1);
	printf("+ - * / ==> ");
	scanf(" %c", &operator);
	printf("두 번째 계산할 값 ==> ");
	scanf("%d", &num2);
	//나눗셈 오류 방지용 실수 변환
	float num3 = num2;
	//연산 및 출력
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