#include <stdio.h>

int main()
{
	int a;
	char b;
	int c;

	printf("첫번째 계산할 숫자: a = \n, 연산자 선택 b: \n");
	if (b == '+')
	{
		printf("두번째 계산할 숫자: c = \n");
		scanf("%d", &c);
		printf("%d", a + c);
	}
	else if (b == '-')
	{
		printf("두번째 계산할 숫자: c = \n");
		scanf("%d", &c);
		printf("%d", a - c);
	}
	else if (b == '*')
	{
		printf("두번째 계산할 숫자: c = \n");
		scanf("%d", &c);
		printf("%d", a * c);
	}
	else if (b == '/')
	{
		printf("두번째 계산할 숫자: c = \n");
		scanf("%d", &c);
		printf("%d", a / c);
	}
	else
		printf("다시입력\n");

	return 0;
}