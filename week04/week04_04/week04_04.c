#include <stdio.h>
#include <string.h>
int main()
{
	char str[101];
	int i;

	printf("문자열을 입력(100자 이내): "); //100자 이내인 이유는 101번째가 널이여서
	scanf("%s", str);

	for (int a = 0; a <= strlen(str); a++)
	{
		if (65 <= str[a] && str[a] <= 90)
		{
			str[a] += 32;
		}
		else if (97 <= str[a] && str[a] <= 122)
		{
			str[a] -= 32;
		}
	}
	printf("변환된 결과 => %s", str);
}