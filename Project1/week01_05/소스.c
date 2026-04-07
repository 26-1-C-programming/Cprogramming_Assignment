//5번
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	switch(a)
	{
	case 1:
		printf("월 \n");
		break;
	case 2:
		printf("화 \n");
		break;
	case 3:
		printf("수 \n");
		break;
	case 4:
		printf("목 \n");
		break;
	case 5:
		printf("금 \n");
		break;
	case 6:
		printf("토 \n");
		break;
	case 7:
		printf("일 \n");
		break;
	default:
		printf("1~7을 입력하세요.\n");
		break;


	}
	return 0;
}