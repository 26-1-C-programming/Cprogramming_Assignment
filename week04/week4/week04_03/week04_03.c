#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b, temp;
	int* p1, * p2;

	printf("a 값 입력:");
	scanf("%d", &a);

	printf("b 값 입력:");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	temp = *p2;
	*p2 = *p1;
	*p1 = temp;

	printf("바뀐 값 a는 %d, b는 %d", *p1, *p2);

}