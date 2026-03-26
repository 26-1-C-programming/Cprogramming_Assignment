//[1번 문제] 숫자 4개를 더하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int first, second, third, fourth;
	
	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &first);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &second);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &third);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &fourth);
	
	printf(" %d + %d + %d + %d = %d", first, second, third, fourth, first + second + third + fourth);
	
	return 0;
	}