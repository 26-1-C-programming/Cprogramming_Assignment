#include <stdio.h>

int main(void) {
	int a = 5;
	int* pointer = &a;
	
	printf("변경전: %d\n", a);
	*pointer = 20;
	printf("변경후: %d\n", a);

	return 0;
}