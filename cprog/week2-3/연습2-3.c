#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a,b,c;
	b = 1;
	c = 0;
	printf("숫자를 입력하세요:");
	scanf("%d", &a);

	while (b <= a) {
		
		if ((b % 2) != 0) { c = c + b; }
		b++;
	}
	printf("%d",c);

}