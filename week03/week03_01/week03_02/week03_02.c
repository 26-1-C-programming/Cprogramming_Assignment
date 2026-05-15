#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char str[101];
	int a = 0;
	int i = 0;
	printf("문자열을 입력(100자 이내):");
	scanf("%s", str);

	while (str[i] != '\0') {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		i++;
	}
	printf("변환된 결과 ==> %s",str);
	
}