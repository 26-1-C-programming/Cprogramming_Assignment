#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//줄 입력
//줄 출력 반복1
//공백 출력 반복1-1 
//i번째 줄에서 별의 개수 2i-1 반복1-2

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) { //반복 1
		for (int j = num; j>i ; j--) { //반복 1-1
			printf(" ");
		}
		for (int k = 1; k <= 2 * i - 1; k++) { //반복 2-2
			printf("*");
		}

		printf("\n");
	}
	

	return 0;
}