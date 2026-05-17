#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, sum;

	for (num = 2;num <= 9;num++) {
		for (sum = 1;sum <= 9;sum++)
		{
			printf("%d x %d = %d\n", num, sum,num*sum);
		}
		printf("\n");
	}
}