#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,b;
	
	printf("숫자를 입력하세요:");
	scanf("%d", &a);
	b= a - (a - 2);
	printf("\n");
	
	for (;a >= 1;a--) {
		for (int i = a;i >= 1;i--) {
			printf("%2d ", i);
		}
		printf("\n");
		for (int t = 1;t < b;t++)
		{
			printf("   ");
		}
		b = b + 1;
	}
	return 0;
}