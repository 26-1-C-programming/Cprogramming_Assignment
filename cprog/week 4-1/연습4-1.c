#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a,b,tmp;
	int* p1,* p2;

	printf("첫번째 값을 입력하세요:");
	scanf("%d", &a);
	printf("두번째 값을 입력하세요:");
	scanf("%d", &b);
	
	p1 = &a;
	p2 = &b;
	
	 tmp= *p1;
	*p1 = *p2;
	*p2 = tmp;
	

	printf("a값 입력 %d\n", *p1);
	printf("b값 입력 %d\n", *p2);


}