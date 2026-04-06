#include <stdio.h>

int main()
{
	int num1, num2;
	char op;

	printf("첫 번째 계산할 값 ==>");
	scanf_s("%d", &num1);

	printf("+ - * / ==>");
	scanf_s(" %c", &op);

	printf("두 번째 계산할 값 ==>");
	scanf_s("%d", &num2);

	if (op == '+') {
		printf("%d", num1 + num2);
	}

	else if (op == '-') {
		printf("%d", num1 - num2);
	}

	else if (op == '*') {
		printf("%d", num1 * num2);
	}

	else if (op == '/') {

		if (num2 != 0) {
			printf("%.2f", (double)num1 / num2);
		}
		
		
		else if (num2 == 0) {
			printf("0으로 나누면 안됩니다.");
		}
	}
}