#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int i;
	int j=0;
	char arr[101];
	printf("문자 및 숫자를 입력하시오:");
	scanf("%s", arr);

	printf("입력한 문자 %s \n", arr);

	for (i = 0; i <= 100; i++) {
		if (arr[i] == '\0') {
			j = i;
		}
	}

	printf("변환된 문자");
	for (int i = j; i >= 0; i--) {
		
		printf("%c",arr[i]);
	}


	return 0;
}


