#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, d; // 입력할 숫자 4개 변수
	int sum; //더하는 과정을 위한 변수

	printf("첫 번째 계산할 값을 입력하세요:");  // 숫자 입력
	scanf("%d", &a); //입력한 숫자 출력
	printf("두 번째 계산할 값을 입력하세요:");
	scanf("%d", &b);
	printf("세 번째 계산할 값을 입력하세요:");
	scanf("%d", &c);
	printf("네 번째 계산할 값을 입력하세요:");
	scanf("%d", &d);
	sum = a + b + c + d;
	printf("%d", sum); //숫자 총합

	return 0;

}