#include <stdio.h>

int main()
{
	int a;

	printf("무슨 숫자 입력?: ");
	scanf("%d", &a);
	for (int num = a; 1 <= num; num--)
	{
		for (int t = a--; 1 <= t; t--)
		{
			printf("%d ", t);
		}
		printf("\n ");
	}

	return 0;
}