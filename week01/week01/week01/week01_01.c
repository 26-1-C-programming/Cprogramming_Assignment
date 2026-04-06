#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main() {

	int num1,num2,op;
	

	printf("첫 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &num1);

	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==>");
	scanf_s("%d", &op);

	printf("두 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &num2);

	if (op == 1) {
		printf("%d + %d = %d", num1, num2, num1 + num2);

	}

	else if (op == 2) {
		printf("%d - %d = %d", num1, num2, num1 - num2);

	}

	else if (op == 3) {
		printf("%d * %d = %d", num1, num2, num1 * num2);

	}
	
	else if (op == 4) {
		printf("%d / %d = %d", num1, num2, num1 / num2);

	}

	return 0;
	
}