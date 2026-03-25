//[2번 문제]윤년 계산 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//변수 선언
	int year;
	//연도 입력
	printf("연도를 입력하세요. : ");
	scanf("%d", &year);
	//연산 및 출력
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("%d년은 윤년입니다.", year);
	else
		printf("%d년은 윤년이 아닙니다.", year);
	
	return 0;
}