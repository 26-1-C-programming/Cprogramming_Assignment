#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("첫번째 숫자 입력=> ");
	scanf("%d", &b);
	printf("무슨 연산? 덧셈 = 1, 뺄셈 = 2, 곱셈 = 3, 나눗셈 = 4 ==> ");
	scanf("%d", &a);
	printf("두번째 숫자 입력=>: \n");
	scanf("%d", &c);

	if (a == 1)
		printf("%d", b + c);
	else if (a == 2)
		printf("%d", b - c);
	else if (a == 3)
		printf("%d", b * c);
	else if (a == 4)
		printf("%f", b / c);
	else
		printf("다시입력");

	return 0;
}