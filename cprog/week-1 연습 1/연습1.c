#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("a, b, c 를 입력하세요");
	scanf("%d %d %d", &a, &b, &c);

	printf("합: %d\n", a + b + c);
	printf("차: %d\n", a - b - c);
	printf("곱: %d\n", a * b * c);

	return 0;
}