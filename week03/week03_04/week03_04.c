#include <stdio.h>

int main()
{
	int a, b;

	printf("구구단: ");
	for (a = 2; a <= 9; a++)
	{
		printf("\n%d단: ", a);
		for (b = 1; b <= 9; b++)
			printf("%d x %d = %d ", a, b, a * b);
	}
	return 0;
}

