#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* Write your code 2배로 변경하는 함수*/

int m(int num)
{
	return num * 2;
}

int main() {
	int num, twice;
	int* a;
	a = &num; 

	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);

	twice = m(*a);

	printf("2배로 변경된 숫자 : %d", twice);

	return 0;
}