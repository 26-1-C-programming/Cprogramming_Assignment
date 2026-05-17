#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	char arr[100];
	a = 0;
	b = 0;
	c = 0;

	printf("영문자 및 숫자를 입력 (100자 이하) :");
	scanf("%s", &arr);

	for (int i = 0;i <= 99;i++)
	{
		if (48 <= arr[i] && arr[i] <= 57)
		{
			a = a + 1;
		}
		if (65 <= arr[i] && arr[i] <= 90)
		{
			b = b + 1;
		}
		if (97 <= arr[i] && arr[i] <= 122)
		{
			c = c + 1;
		}
	}
	printf("대문자 %d, 소문자 %d, 숫자 %d개", b, c, a);
	return 0;
}