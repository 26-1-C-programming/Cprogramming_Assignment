#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int change(char* arr); //가독성을 위해서 함수 선언만 먼저 하고 int main 뒤에 함수 내용을 써주는 것임

int main() {
	char arr[101];
	printf("문자열을 입력(100자 이내) : ");
	scanf("%s", arr);

	change(arr);// 문자열은 &을 붙이지 않아도 문자변수 자체를 넣으면 그 주소전체가 넘어가게됨. arr을 넣었으므로 시작점부터 넘어가게 되는 것이다.

	printf("변환된 결과 ==> %s", arr);
}

int change(char* arr)//포인터는 int처럼 *을 써야함
{
	int gap = 'a' - 'A';
	for (int i = 0; i <= strlen(arr); i++)
	{
		if ('A' <= arr[i] && arr[i] <= 'Z') //굳이 아스키코드의 숫자를 입력하지 않고''을 이용해 그 숫자를 대신할 수 있다.
		{
			arr[i] += gap;
		}
		else if ('a' <= arr[i] && arr[i] <= 'z')
		{
			arr[i] -= gap;
		}
	}
}
