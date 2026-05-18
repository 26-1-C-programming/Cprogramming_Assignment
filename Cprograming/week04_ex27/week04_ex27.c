#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gugu(int n);

int main() {
	int n;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &n);
	gugu(n);
}

int gugu(int n) {
	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);
}