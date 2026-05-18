#include <stdio.h>

int main() {
	int arr[10] = { 10,23,15,26,17,37,45,44,3,11 };
	int max = 0;
	int min = 0;
	double average = 0;

	/* Write Your Code */
	int sum = 0;
	min = arr[0];
	for (int i = 0; i < 10; i++) {
		sum += arr[i];
		if (max - arr[i] <= 0) {
			max = arr[i];
		}
		if (arr[i] - min <= 0) {
			min = arr[i];
		}
	}
	
	average = (double)sum / 10;

	printf("가장 큰 수 : %d\n", max);
	printf("가장 작은 수 : %d\n", min);
	printf("배열의 평균값 : %f\n", average);
}