#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

	int ac(int a, int b)
	{
		return a * b;
	}

	int main() {
		int num, twice;
		int* p;
		p = &num;

		printf("숫자를 입력하세요 : ");
		scanf("%d", &num);

		/* Write your code */
		twice = ac(*p, 2);

		printf("2배로 변경된 숫자 : %d", twice);

		return 0;
	}