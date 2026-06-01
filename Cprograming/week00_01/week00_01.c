//[1번 문제] 숫자 4개를 더하는 프로그램

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
int main(void)
{
	char arr[5] = { 'c','h','a', '\0'};
	printf("%s", arr);

	if (strcmp(arr, "cha") == 0)printf("1");
	
	return 0;
	}