#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a, c,t;

	printf("숫자를 입력하세요:");
	scanf("%d", &a);
	c = a;
	t = 2;
	printf("\n");

	for (int i = 1;i <= a;i++) 
	{
		for (int b = 1;b <= c - 1;b++)
		{
			printf(" ");
		}
		for (int d = 1;d<t;d++)
		{
			printf("*");
		}
		printf("\n");
		c = c - 1;
		t = t + 2;
	}
}