#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	char str1[101];

	printf("영문자 및 숫자를 입력(100자 이하) : ");
	scanf("%s", str);

	for (int a = 0; a <= 100; a++)
	{
		for (int i = strlen(str); str[a] = str1[i]; i--);

	}
	printf("입력한 문자열 ==> %s\n", str); //얘도 출력안됨..
	printf("변환된 문자열 ==> %s", str1);  
}