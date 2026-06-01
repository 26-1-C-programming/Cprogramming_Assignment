#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//총 3차시
//1+2 3+4 5+6 7+8 -> 1+3 5+7 -> 1 + 5
//n+1 -> n+2 -> n+4

int square_2(int a) {
	int b = 1;
	for (int i = 0; i < a; i++) {
		b *= 2;
	}
	return b;
}

int main(void) {
	int arr[4][8] = { 0 };
	scanf("%d %d %d %d %d %d %d %d", &arr[0][0], &arr[0][1], &arr[0][2], &arr[0][3], &arr[0][4], &arr[0][5], &arr[0][6], &arr[0][7]);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 8; j = j + 2 * (i + 1)) {
			arr[i+1][j] = arr[i][j] + arr[i][j + square_2(i)];
		}
	}
	for (int k = 0; k < 4; k++) {
		for (int l = 0; l < 8; l++) {
			printf("%3d", arr[k][l]);
		}
		printf("\n");
	}

	return 0;
}