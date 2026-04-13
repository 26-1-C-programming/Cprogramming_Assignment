#include <stdio.h>

int main()
{
    int arr[10] = { 10,23,15,26,17,37,45,44,3,11 };
    int max = 0;
    int min = 0;
    double average = 0;

    for (int i = 0; i <= 9; i++) {
        if (max <= arr[i])
            max = arr[i];
    }
    
           
    

    for (int h = 0; h <= 9; h++) {
        if (min == 0)
            min = max;
        if (min >= arr[h] )
            min = arr[h];

    }

    for (int j = 0; j <= 9; j++) {
        average += arr[j];
    }
    average = average / 10;

    printf("가장 큰 수 : %d\n", max);
    printf("가장 작은 수: %d\n", min);
    printf("배열의 평균값 : %f\n", average);

}