//3번 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	
	scanf("%d", &a);

	if (a % 2 == 0)
		printf("짝수입니다.\n");
	else if (a % 2 == 1)
		printf("홀수입니다.\n");

	return 0;
}
