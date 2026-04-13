#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++) {
		for (int h = 1; h <= i - 1; h++) {
			printf(" ");
		}
		for (int j = 1; j <= a - i + 1; j++) {
			
			printf("%d", 5-j+1);
		}
		
		printf("\n");
	}
}