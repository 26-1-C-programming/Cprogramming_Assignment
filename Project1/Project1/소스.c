//1번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	scanf("%d %d %d", &a, &b, &c);

	printf("덧셈 %d\n", a + b + c);
	printf("뺄셈 %d\n", a - b - c);
	printf("곱셈 %d\n", a * b * c);

	return 0;
}
