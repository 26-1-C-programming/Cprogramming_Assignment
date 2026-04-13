#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b = 0;
	int i = 1;

	scanf("%d", &a);

	while (i <= a) {
		b += i;
		i += 2;
	}
	printf("%d", b);
	
}