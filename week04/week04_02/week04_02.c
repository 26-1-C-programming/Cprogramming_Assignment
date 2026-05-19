#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	
	int b = 0;
	int c = 0;
	int d = 0;

	printf("문자열을 입력(100자 이내) : ");
	scanf("%s", str);
	for (int a = 0; a <= strlen(str); a++)
	{
		if (48 <= str[a] && str[a] <= 57)
		{
			b++;
		}
		else if (65 <= str[a] && str[a] <= 90)
		{
			c++;
		}
		else if (97 <= str[a] && str[a] <= 122)
		{
			d++;
		}
		
		}
	printf("숫자 개수 = %d", b);
	printf("대문자 개수 = %d", c);
	printf("소문자 개수 = %d", d);
}