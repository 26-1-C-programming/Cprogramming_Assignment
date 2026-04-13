#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int n, i, j;
	printf("숫자를 입력하시오:");
	scanf("%d", &n);
	for (i = n; i >= 1; i--) {
		for (j = n; j >= 1; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}


	return 0;
}