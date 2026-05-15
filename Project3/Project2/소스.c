#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gugudan(int a) {
	for (int i = 1; i <= 9; i++) {
		printf("%d X %d = %d\n", a, i, a * i);
	}
	return 0;
}

int main()
{	
	int num;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &num);
	gugudan(num);

	
	
}