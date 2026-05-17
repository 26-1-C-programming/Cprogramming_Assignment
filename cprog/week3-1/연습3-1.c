#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr[100];
	int t = 0;

	printf("영문자 및 숫자를 입력 (100자 이하) :");
	scanf("%s", arr);

	printf("입력한 문자열 ==> %s\n", arr);
	for (int i = 0;i <= 99;i++) {
		if (arr[i] == '\n') {
			break;
		}
		t++;
	}
	printf("변환된 문자열 ==> ");
	for (int j = t - 2;j >= 0;j--) {
		printf("%c", arr[j]);
	}
}