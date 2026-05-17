#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a;
	int* p;

	printf("숫자를 입력하세요 :");
	scanf("%d", &a);

	p = &a;

	printf("num의 값 : %d\n", a);
	printf("numd의 지정된주소 : %d\n", &a);
	printf("프린터에 저정된 주소 : %d\n", p);
	printf("프린터가 가르키는 값 : %d", *p);

}