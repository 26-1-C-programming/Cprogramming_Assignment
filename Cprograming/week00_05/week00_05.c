//[5번 문제] 입력된 문자열을 거꾸로 출력

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	char str[10];
	int len;

	printf("문자열을 입력 ==> ");
	scanf("%s", &str);

	for (len = 0; str[len] != '\0'; len++);

	while (len > 0) {
		printf("%c", str[len - 1]);
		len--;
	}

	return 0;

}