#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;

	printf("숫자를 입력하세요:");
	scanf("%d", &a);
	b = a;
	printf("\n");

	for (;a >= 1;a--) {
		for (int i = a;i >= 1;i--) {
			printf("%d ", i);
		}
		printf("\n");
		for (;b == a + 2;b++)
		{
			printf("  ");
		}
	}
	return 0;
}