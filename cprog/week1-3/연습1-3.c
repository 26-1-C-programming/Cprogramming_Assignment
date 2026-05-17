#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,b;

	printf("숫자를 입력하세요:");
	scanf("%d", &a);

	b = a % 2;
	if (b = 0) { printf("%d는 짝수입니다.", a); }
	else
	{
		printf("%d는 홀수입니다", a);
	}
}