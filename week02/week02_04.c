#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//줄 입력
//줄 출력
//공백 출력
//별 하나 출력
//T번째 줄에서 공백의 개수 2n-3
//별 하나 + 줄바꿈 출력

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) { //반복 1
		for (int j = num; j > i; j--) { //반복 1-1
			printf(" ");
		}
		if (i>=2) {
			printf("*");
			for (int k = 1; k <= 2 * i - 3; k++) { //반복 2-2
				if (i == num) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
		}

		printf("*\n");
	}


	return 0;
}