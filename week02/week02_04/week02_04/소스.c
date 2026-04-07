#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	char b;
	int c;

	printf("첫번째 계산할 값=> ");
	scanf("%d", &a);
	printf("+-*/ => ");
	scanf(" %c", &b);
	printf("두번째 계산할 값 => ");
	scanf("%d", &c);
	if (b == '+')
	{
		printf("%d", a+c);
	}
	else if (b == '-') {
		printf("%d", a - c);
	}
	else if (b == '*')
	{
		printf("%d", a * c);
	}
	else if (b == '/')
	{
		printf("%f", a / c);
	}
	else
		printf("다시 입력");

	return 0;
}