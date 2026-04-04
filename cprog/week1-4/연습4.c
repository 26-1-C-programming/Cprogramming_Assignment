#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;

	printf("점수를 입력하세요:");
	scanf("%d", &a);

	if (100 >= a && a>= 90) { printf("A"); }
	else if (89 >= a && a>= 70) { printf("B"); }
	else if (69 >= a && a>= 60) { printf("C"); }
	else if (59 >= a && a>= 0) { printf("D"); }

	return 0;
}