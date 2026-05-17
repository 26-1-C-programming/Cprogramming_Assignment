#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[100];
	char* p1;



	printf("문자열을 입력하세요 :");
	scanf("%s", arr);

	for (int i = 0;i < 100;i++)
	{
		p1 = arr + i;

		if (*p1 == '\0')
		{
			break;
		}
		printf("%c\n", *p1);
	}

}