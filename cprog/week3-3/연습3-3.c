#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;

	printf("출력하고 싶은 단을 입력 :");
	scanf("%d", &a);
	for(int i=1;i<=9;i++)
	{
		printf("%d x %d = %2d\n", a, i, a * i);
	}
}