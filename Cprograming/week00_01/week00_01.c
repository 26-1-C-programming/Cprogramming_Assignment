//[1번 문제] 숫자 4개를 더하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//변수 선언
	int first, second, third, fourth;
	//값 입력
	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &first);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &second);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &third);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &fourth);
	//계산 및 출력
	printf(" %d + %d + %d + %d = %d", first, second, third, fourth, first + second + third + fourth);
	
	return 0;
	}