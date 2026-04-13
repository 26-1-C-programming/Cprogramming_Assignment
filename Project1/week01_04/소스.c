//4번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	if (a > 90)
		printf("A \n");
	else if (90 >= a || a > 70)
		printf("B \n");
	else if (70 >= a || a > 60)
		printf("C \n");
	else
		printf("F \n");

	return 0;
}