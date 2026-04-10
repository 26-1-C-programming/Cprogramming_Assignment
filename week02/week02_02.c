//- 첫째 줄에 입력 숫자 n부터 1까지 공백으로 구분 출력
//-둘째 줄에 입력 숫자 n - 1 부터 1까지 공백으로 구분 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num); //줄 입력
	//STEP
	//줄반복
	//공백 역순으로 출력
	//숫자 역순으로 출력
	for (int i = 0; i < num; i++) { //줄 반복
		for (int j = 0; j < i; j++) { //공백 역순(0,1,2,3,4...) 출력
			printf(" ");
		}
		for (int k = num; k > i; k--) { //숫자 역순 출력
			printf("%d", k);
		}
		printf("\n");
	}

	return 0;
}