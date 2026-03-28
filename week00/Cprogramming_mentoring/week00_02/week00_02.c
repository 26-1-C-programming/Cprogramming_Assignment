#include <stdio.h>

int main() {
    int year;

    printf("연도를 입력하세요: ");
    scanf_s("%d", &year);

    
    printf("%d년은 %s", year, ( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ) ? "윤년입니다." : "윤년이 아닙니다.");
    return 0;
}