#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[101];
	char* pointer = arr;

	printf("문자열을 입력하세요: ");
	scanf("%s", arr);

	while (*pointer != '\0') {
		printf("%c\n", *pointer);
		pointer++;
	}

	return 0;
}