#include <stdio.h>

int swap(int* i, int* k);

int main()
{
	int a;
	int b;
	
	printf("a값 입력 : ");
	scanf("%d", &a);
	printf("b값 입력 : ");
	scanf("%d", &b);
	
	swap(&a,&b); //위치가 a의 주소를 i에, b의 주소를 k에 넣는 다는 것임 int형이라 &을 붙여야 주소값이 넘어감
	printf("바뀐 값 a는 %d, b는 %d", a, b); //함수 다음에 쓴 a,b이므로 함수내에서 값을 처리 한 다음의 값이 되어 입력받은 것과 다른 a,b가 되는 것임


}

int swap(int* i, int* k)
{
	// i == &a i값 자체는 a의 주소가 들어가는 것임
	// k == &b 마찬가지
	int tmp;

	tmp = *i;
	*i = *k;
	*k = tmp;
}
