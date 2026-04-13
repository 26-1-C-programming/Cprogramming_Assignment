#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 9; j++) {
			printf("%d X %d = %d\n", (i + 1), j, (i + 1) * j);
		}
	}
}