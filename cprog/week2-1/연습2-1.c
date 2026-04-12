#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num[3][3]=
	{
		{1,2,3},
	    {4,5,6},
	    {7,8,9}
	};
	
	printf ("%d", num[1][2]);
	return 0;
}