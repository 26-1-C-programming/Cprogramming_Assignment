#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	// 입력한 문자열의 길이
	int len = strlen(str);

	for (int a = 0; a <= strlen(str); a++)
	{
		char* A;
		A = &str[a];
		while( len >= 0 )
		{
			len--;
			str[a] = str[len];
			str[len] = A;
		}

	}

	printf("내용을 거꾸로 출력 ==> %s", str);
}