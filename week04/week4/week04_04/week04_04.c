#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	// 입력한 문자열의 길이
	int len = strlen(str);
	
	char* p = str + len - 1;
	
	printf("내용을 거꾸로 출력 ==> ");
	while (p >= str) {
		printf("%c", *p);
		p--;
	}
}