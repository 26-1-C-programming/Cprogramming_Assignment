#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char arr[100];
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;

	printf("문자열을 입력(100자 아내):");
	scanf("%s", arr);

	while (arr[i] != '\0') {
		if (arr[i] >= 'A' && arr[i] <= 'Z') {
			a++;
		}
		else if (arr[i] >= 'a' && arr[i] <= 'z') {
			b++;
		}
		else if (arr[i] >= '0' && arr[i] <= '9') {
			c++;
		}
		i++;
	}

	printf("대문자 %d개, 소문자 %d개, 숫자 %d개", a, b, c );
}