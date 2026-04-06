#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b;

	printf("a,b를 입력하세요:");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("a가 b보다 큽니다.");
	}
	else if (a < b)
		printf("b가 a보다 큽니다.");
	if (a == b)
		printf("a와 b가 같습니다.");

	return 0;
}