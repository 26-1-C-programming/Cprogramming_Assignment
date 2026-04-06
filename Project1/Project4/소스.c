#include <stdio.h>

int main()
{
	int a;
	
	printf("점수를 입력하세요:");
	scanf_s("%d", &a);

	if (a >= 100)
		printf("잘못된 점수입니다.");
	else if (90<= a && a <100)
			printf("A");
	else if (70 <= a && a < 90)
			printf("B");
	else if (60 <= a && a < 70)
			printf("C");
	else
		printf("F");

					return 0;

}