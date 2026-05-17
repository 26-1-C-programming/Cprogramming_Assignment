#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 5,b=20, tmp;
	int* p1,* p2;

	p1 = &a;
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;


	printf("변경 전 : %d\n", *p2);
	printf("변경 후 : %d\n", *p1);
}