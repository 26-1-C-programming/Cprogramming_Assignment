
#include <stdio.h>

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[3] = { 1, 2, 3 };
    print_array(arr, 3);
    return 0;
}