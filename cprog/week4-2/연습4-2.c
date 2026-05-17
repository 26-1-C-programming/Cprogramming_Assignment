#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() 
{
	char str[100];
	printf("문자열을 입력하세요 : ");
	scanf("%s", str);

	int len = strlen(str);
	char tmp;
  
	for(int i=0;i<len/2;i++)
   {
	   int* p1,* p2;
	   
	   p1 = &str[i];
	   p2 = &str[len-i-1];
	   
	   tmp = *p1;
	   *p1 = *p2;
	   *p2 = tmp;
   }


	printf("내용을 거꾸로 출력 ==> %s", str);
}