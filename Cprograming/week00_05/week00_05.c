//[5번 문제] 입력된 문자열을 거꾸로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//변수 선언
	char str[10];
	int len;
	//텍스트 출력 및 변수 정의
	printf("문자열을 입력 ==> ");
	scanf("%s", &str);
	//텍스트 길이 계산
	for (len = 0; str[len] != '\0'; len++);
	//거꾸로 출력
	while (len > 0) {
		printf("%c", str[len - 1]);
		len--;
	}

	return 0;

}