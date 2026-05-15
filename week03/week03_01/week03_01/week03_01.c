#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[101];
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	printf("문자열을 입력(100자이내):");
	scanf("%s", str);

	while (str[i] != '\0') {
		
		if ('A' <= str[i] && str[i] <= 'Z') {
			a++;
		}
		else if ('a' <= str[i] && str[i] <= 'z') {
			b++;
		}
		else if ('0' <= str[i] && str[i] <= '9') {
			c++;
		}
		i++;
	}

	printf("대문자 %d개, 소문자 %d개,숫자%d개", a, b, c );

}