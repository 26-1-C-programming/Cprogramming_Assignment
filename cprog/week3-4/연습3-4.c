#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int a, int b);
int cc(int c, int d);
int main()
{
	char arr[100];
	
	printf("문자열을 입력 (100자 이하) :");
	scanf("%s", &arr);

	for (int i = 0;i <= 99;i++)
	{
		if (65 <= arr[i] && arr[i] <= 90) 
		{
			arr[i] = add(arr[i], 32);
		}
		else if (97 <= arr[i] && arr[i] <= 122)
		{
			arr[i] = cc(arr[i], 32);
		}
	}
	printf("변환된 결과 ==> %s", arr);

}
int add(int a, int b)
{ return a + b; }
int cc(int c, int d)
{return c - d;}