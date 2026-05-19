#define CRT_SECURE_NO_WARNIGS
#include <stdio.h>
#include <string.h>

int k_strlen(const char str[])     //이미 string.h에 strlen이 있으므로 헷갈리지 않게 다른 이름으로 바꿈
{
	int b = 0;
	                                         //새로운 함수 내에 printf와 scanf를 넣으면 두번씩 실행이 되어서 함수 내의 것은 제거함
	for (int a = 0; a <= strlen(str); a++)
	{
		if (33 <= str[a] && str[a] <= 126)
		{
			b++;
		}
     }
	return b;          //아직 return의 제대로 된 의미를 모르겠음 반환값인데 b로 다시 되돌아가라는 의미?
}
int main()
{
	char string[100] = { 0 };

	printf("문자열을 입력하시오 : ");
	scanf("%s", string);

	printf("문자열의 길이 : %d", k_strlen(string));

	return 0;
}


