#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int* pointer;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	pointer = &num;

	printf("num의 값: %d\n", num);
	printf("num의 주소: %p\n", &num);
	printf("포인터에 저장된 주소: %p\n", pointer);
	printf("포인터가 가르키는 값: %d\n", *pointer);

	return 0;
}