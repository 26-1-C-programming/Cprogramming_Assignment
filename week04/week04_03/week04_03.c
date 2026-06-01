#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Write your code 2배로 변경하는 함수*/
int* twicevalue(int* p) {
	*p *= 2;
	return p;
}

int main() {
	int num, twice;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	/* Write your code */
	int* pointer = &num;
	twice = *twicevalue(pointer);

	printf("2배로 변경된 숫자 : %d", twice);

	return 0;
}