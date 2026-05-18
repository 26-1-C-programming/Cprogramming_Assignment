#include <stdio.h>

int main()
{
	int a = 5;
	int* pa;
	pa = &a;
	printf("변경 전: %d\n", a);
	*pa = 20;
	printf("변경 후: %d", a);
}