#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int i = 1;
	int sum = 0;
	scanf("%d", &a);

	while (a >= i) {
		if (i % 2 == 1)
			sum += i;
		i++;
	}
	printf("a까지의 홀수 합: %d\n", sum);
}
