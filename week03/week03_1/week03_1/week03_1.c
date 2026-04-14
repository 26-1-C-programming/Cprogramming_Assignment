#include <stdio.h>

int main()
{
	int arr[10] = { 10,23,15,26,17,37,45,44,3,11 };
	int max = 0;
	int min = arr[0];
	double average = 0;
	int total = 0;
	
	for (int a = 0; a < 10; a++)
	{
		if(max < arr[a])
		{
			max = arr[a];
		}		
	}
	for (int a = 1; a < 10; a++)
	{
		if (min > arr[a])
		{
			min = arr[a];
		}
	}
	for (int i=0; i < 10; i++)
	{
		total = total + arr[i];
	}
	average =(double)total / 10;
	printf("가장 큰 수: %d\n", max);
	printf("가장 작은 수: %d\n", min);
	printf("배열의 평균값: %f\n", average);
}
