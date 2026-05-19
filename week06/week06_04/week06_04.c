
#include <stdio.h>

int funcSum(int* num);

int main()
{
	int arr[5];
	int result;
	printf("숫자를 입력하세요 : ");
	//scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]); //너무 비효율적
	for (int k = 0; k <= 4; k++)
	{
		scanf("%d", &arr[k]); //scanf에는 주소연산자 써라
	}
	result = funcSum(arr);//최종적으로 더한 값이 반환되어야 하므로 return이 있어야함
	printf("합 : %d", result);
}

int funcSum(int* num) //arr의 주소가 num에 들어감
{
	int tmp = 0;
	for (int i = 0; i <= 4; i++)
	{
		tmp += num[i];
		
	}
	return tmp;
}