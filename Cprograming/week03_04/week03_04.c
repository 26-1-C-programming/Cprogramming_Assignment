#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("초기 입력값 : \n");
    int arr[29] = { 0 };

    for (int i = 0; i < 29; i++) {
        arr[i] = i + 2;
        printf("%3d", arr[i]);
    }
    printf("\n소수 : \n");

    for (int j = 0; j < 29; j++) {

        if (arr[j] != 0) {
            for (int k = j + 1; k < 29; k++) {
                if (arr[k] != 0 && arr[k] % arr[j] == 0) {
                    arr[k] = 0;
                }
            }
        }
        printf("%3d", arr[j]);
    }

    return 0;
}