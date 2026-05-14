//실습예제 50 2~30 사이의 소수 구하기 (에라토스테네스의 체) //117230068 박현지

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[29];
	int i, j, k;
	int* p;
	int min;

	p = a;

	// 초기값: 배열에 2~30까지 숫자 채우기
	printf("초기 입력값 : \n");
	for (i = 0; i <= 28; i++)
	{
		*(p + i) = i + 2;
		printf("%3d ", *(p + i));
	}
	printf("\n\n");

	// 소수 구하기
	for (i = 0; i < 29; i++)
	{
		if ((*(p + i)) != 0)  // 수(*(p+i))가 0이 아닐 때, 그 수를 가장 작은 소수(min)로 정한다
		{
			min = *(p + i);
			for (j = *(p + i) + 1; j < 29; j++)  // 가장 작은 소수(min)의 다음 수부터 30까지, min 으로 나눴을 때 0이 되는 수(배수)를 0으로 바꾼다
			{
				if (*(p + j) % min == 0)
					*(p + j) = 0;
			}
		}
		else
			continue;
	}

	// 걸러진 배열 출력 (소수 제외 모두 0)
	printf("소수 : \n");
	for (i = 0; i < 29; i++)
		printf("%3d ", *(p + i));
}