#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void setvalue(int* hang, int* yeol, int corner) {
	switch (corner % 4) {
	case 0:
		(*yeol)++;
		break;
	case 1:
		(*hang)++;
		break;
	case 2:
		(*yeol)--;
		break;
	case 3:
		(*hang)--;
		break;
	}
}

int main() {
	int n;
	int arr[9][9] = { 0 };


	/* Write Your Code */
	scanf("%d", &n);

	int hang = 0;
	int yeol = 0;
	int corner = 0;

	for (int i = 1; i <= n * n; i++) {
		if (0 <= hang && hang < n && 0 <= yeol && yeol < n)
			arr[hang][yeol] = i;

		setvalue(&hang, &yeol, corner);

		if (hang == n || hang == -1 || yeol == n || yeol == -1 || arr[hang][yeol] != 0) {
			setvalue(&hang, &yeol, corner + 2);
			corner++;
			setvalue(&hang, &yeol, corner);
		}
	}

	//Print
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%-4d ", arr[i][j]);
		}
		printf("\n");
	}
}