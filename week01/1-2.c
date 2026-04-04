#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, c;
	char b;

	printf("첫번째 계산할 값 ==>");
	scanf("%d", &a);

	printf("+ - * / ==>");
	scanf(" %c", &b);

	printf("두번째 계산할 값 ==>");
	scanf("%d", &c);

	
	if (b == '+') { printf("%d + %d = %d", a, c, a + c); }
	else if (b == '-') { printf("%d - %d = %d", a, c, a - c); }
	else if (b == '*') { printf("%d * %d = %d", a, c, a * c); }
	else if (b == '/') {
		if (c == 0) { printf("0으로 나눈면 안됩니다"); }
	else printf("%d / %d = %f", a, c, a / (float)c); 
	}

}