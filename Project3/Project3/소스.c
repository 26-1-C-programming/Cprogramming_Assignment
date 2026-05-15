#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	char str[100];
	int length = 0;
	
	printf("영문자 및 숫자를 입력(100자이하):");
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		length += 1;
	}
	

	
	str[length] = '\0';
	printf("입력한 문자열 ==> %s\n", str);
	printf("변환된 문자열 ==> ");

	for (int j = length; j >= 0; j--) {
		printf("%c", str[j]);
	}
}