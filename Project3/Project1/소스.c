#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int a;
	int i = 1;
	
	scanf("%d", &a);

	while (i <= a) {
		int j = 1;
		int h = 1;
		while (j < i) {
			printf("0 ");
			j++;

		}
		printf("%d ", i);
		while (h <= a - i) {
			printf("0 ");
			h++;
		}
		i++;
		printf("\n");
	}


}