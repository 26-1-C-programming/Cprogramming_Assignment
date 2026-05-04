#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	printf("초기 입력값 : \n");
	int arr[29] = { 0 };
	for (int k = 0; k < 29; k++) {
		arr[k] = k + 2;
		printf("%3d", arr[k]);
	}
	printf("\n");
	printf("소수 : \n");
	for (int i = 0; i < 29 && arr[i] != 0; i++) {
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) {
				arr[i] = 0;
			}
		}
			printf("%3d", arr[i]);
	}

	return 0;
}