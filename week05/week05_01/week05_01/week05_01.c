#include <stdio.h>

int main()
{
	int i;
	int k;
	int *tmp;
	tmp = &i;
	 //tmp에 i의 주소를 넣음

	printf("a값 입력 : ");
	scanf("%d", &i);
	printf("b값 입력 : ");
	scanf("%d", &k);
	
	i == k;
	k == *tmp;
	

	printf("바뀐 a값 %d, 바뀐 b값 %d", i, k);
}