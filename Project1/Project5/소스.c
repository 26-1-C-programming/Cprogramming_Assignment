#include <stdio.h>

int main()
{
	int a;
	printf("1부터 7까지의 숫자를 입력하세요 :");
	scanf_s("%d", &a);

	switch (a) {
		case 1:
			printf("월");
			break;
		case 2:
			printf("화");
			break;
		case 3:
			printf("수");
			break;
		case 4:
			printf("목");
			break;
		case 5:
			printf("금");
			break;
		case 6:
			printf("토");
			break;
		case 7:
			printf("일");
			break;
		default:
			printf("1 ~ 7 입력하세요.");
			break;

	return 0;
	}
}