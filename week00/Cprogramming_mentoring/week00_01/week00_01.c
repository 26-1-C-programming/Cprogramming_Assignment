#include <stdio.h>
int main(void)
{
	int first, second, third, fourth;
	printf("첫 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &first);

	printf("두 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &second);

	printf("세 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &third);

	printf("네 번째 계산할 값을 입력하세요 ==>");
	scanf_s("%d", &fourth);

	printf("%d + %d + %d + %d = %d", first, second, third, fourth, first + second + third + fourth);

}