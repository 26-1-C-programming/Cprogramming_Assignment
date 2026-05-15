#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[100];
	int i = 0;
	char str[100];

	printf("문자열을 입력(100자 이내):");
	scanf("%s", arr);

	while (arr[i] != '\0') {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			str[i] = arr[i] + 32;
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z') {
			str[i] = arr[i] - 32;
		}
		else
			str[i] = arr[i];
		i++;
	}
	str[i] = '\0'; //직접 입력받아 초기화된 배열이 아니므로 \0값을 넣어줘야한다
	printf("%s", str);
}