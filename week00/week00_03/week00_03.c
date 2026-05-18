//[3번 문제] if문을 활용한 계산기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int num1, num2, operator;
	
	printf("첫 번째 계산할 값을 입력하세요. ==> ");
	scanf("%d", &num1);
	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==> ");
	scanf("%d", &operator);
	printf("두 번째 계산할 값을 입력하세요. ==> ");
	scanf("%d", &num2);
	
	float num3 = num2;
	
	if (operator == 1)
		printf("%d + %d = %d", num1, num2, num1 + num2);
	else if (operator == 2)
		printf("%d - %d = %d", num1, num2, num1 - num2);
	else if (operator == 3)
		printf("%d * %d = %d", num1, num2, num1 * num2);
	else if (operator == 4)
		printf("%d / %d = %f", num1, num2, num1 / num3);
	else
		printf("잘못된 연산자입니다.");

	return 0;
}