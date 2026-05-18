#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 선언
void change(char arr[]);

int main() {
	char arr[101];
	printf("문자열을 입력(100자 이내) : ");
	scanf("%s", arr);

	/* 변환 함수 입력 */
	change(arr);

	printf("변환된 결과 ==> %s", arr);
}

/*함수 내용 작성*/
void change(char arr[]) {
	for (int i = 0; arr[i] != '\0'; i++) {
		if ('a' <= arr[i] && arr[i] <= 'z')
			arr[i] -= 'a' - 'A';
		else if ('A' <= arr[i] && arr[i] <= 'Z')
			arr[i] += 'a' - 'A';
	}
}
