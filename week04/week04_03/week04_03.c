#include <stdio.h>


int main()
{
	int a;
	
	printf("출력하고 싶은 단을 입력: ");
	scanf("%d", &a);
	for (int b = 1; b <= 9; b++)
	{
		printf("\n %d * %d = %d", a, a, b, a*b);
		
	}
	return 0;
}
