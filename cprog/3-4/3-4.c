#include <stdio.h>
int main()
{
	int a;
	printf("초기 입력값 :\n");
	for (a = 2;a < 31;a++)
	{
		printf("%2d ", a);
	}
	printf("\n");
	printf("소수 :\n");
	for (int b = 2;b < 31;b++)
	{
		int k = 1;
		for (int c = 2;c < b;c++)
		{
			if (b % c == 0)
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
		{
			printf("%2d ", b);
		}
		else { printf(" 0 "); }
	
	}
}