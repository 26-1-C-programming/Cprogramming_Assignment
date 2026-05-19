#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int n;
	
	
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d", &n);
	
	for (int i = 1;i < 9 ;i++) {
		int result= gugu(n,i); //n과 i의 위치만 n과 j면 됨
		printf("%d X %d = %d\n", n, i, result);
	}
	
}

int gugu(int n, int j) {
	return n * j;

}
