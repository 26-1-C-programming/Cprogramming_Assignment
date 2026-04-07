//2번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;

	scanf("%d, %d", &a, &b);

	if (a < b) {
		printf("a가 b보다 작습니다.\n");
	}
	else if (a == b)
	{
		printf("a가 b와 같습니다.\n");
	}
	else
		printf("a가 b보다 큽니다.\n");


	return 0;
}