#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int k_strcmp(const char str1[], const char str2[])
{
    int result = 0;
    if (strlen(str1) > strlen(str2))
    {
        for (int a = 0; a <= strlen(str1); a++)
        {
            if (str1[a] > str2[a])
            {//str1 > str2
                result == 1;
            }
            else if (str1[a] < str2[a])
            {//str1 < str2
                result == -1;
            }
            else if (str1[a] == str2[a])
            {
                a == a;
            }
        }
    }
    else if(stlren(str1) > stlren(str2))
    {
        for (int a = 0; a <= strlen(str2); a++)
        {
            if (str1[a] > str2[a])
            {//str1 > str2
                result == 1;
            }
            else if (str1[a] < str2[a])
            {//str1 < str2
                result == -1;
            }
            else if (str1[a] == str2[a])
            {
                a == a;
            }
        }
    }
    else if (stlren(str1) == stlren(str2))
    {
        for (int a = 0; a <= strlen(str1); a++)
        {
            if (str1[a] > str2[a])
            {//str1 > str2
                result == 1;
            }
            else if (str1[a] < str2[a])
            {//str1 < str2
                result == -1;
            }
            else if (str1[a] == str2[a])
            {
                a == a;
            }
        }
    }
    return result;
}

int main() {
    char str1[100] = { 0 };
    char str2[100] = { 0 };

    printf("첫 번째 문자열을 입력하시오 : ");
    scanf("%s", str1);
    printf("두 번째 문자열을 입력하시오 : ");
    scanf("%s", str2);

    if (k_strcmp(str1, str2) < 0) {
        printf("첫 번째 문자열이 먼저 온다.\n");
    }
    else if (k_strcmp(str1, str2) > 0) {
        printf("두 번째 문자열이 먼저 온다.\n");
    }
    else {
        printf("같은 문자열이다.\n");
    }

    return 0;
}