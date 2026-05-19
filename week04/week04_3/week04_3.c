#define CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <string.h>

int k_strlen(const char str[])   
{
	int b = 0;
	
	for (int a = 0; a <= strlen(str); a++)
	{
		if (33 <= str[a] && str[a] <= 126)
		{
			b++;
		}
	}
	return b;          
}
int main()
{
	char string[100] = { 0 };

	printf("문자열을 입력하시오 : ");
	scanf("%s", string);

	printf("문자열의 길이 : %d", k_strlen(string));

	return 0;
}