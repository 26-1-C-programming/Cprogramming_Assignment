#include <stdio.h>

int main()
{
	char str = 0;

	printf("문자열을 입력하세요: ");
	scanf("%s", str);
	

	for (int a = 0; a <= (sizeof(str) - 1); a++)
	{
		int* i;
		i = &a;
		printf("%c\n", str[i]);

	}
	return 0;

}