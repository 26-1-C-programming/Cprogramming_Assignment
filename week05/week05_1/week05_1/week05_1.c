#include <stdio.h>

int main()
{
	int a;

	printf("숫자를 입력: ");
	scanf("%d", &a);

	int num = a;
	int* pnum;
	pnum = &num;

	printf("num의 값: %d\n", num);
	printf("num의 주소: %p\n", &num);
	printf("포인터에 저장된 주소: %p\n", &pnum);
	printf("포인터가 가리키는 값: %d", *pnum); //그냥 pnum을 쓰면 int(정수형)에 주소가 오게 되어서 이상한 값이 나왔던 것임. 
}                                              //역참조를 이용해야함! *pnum이어야 num의 값이 온다