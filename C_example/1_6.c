#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Show_H_M_S(int n)
{
	int sec, min, hour, temp;

	sec = n % 60;
	temp = n / 60;
	min = temp % 60;
	hour = temp / 60;

	printf("%d초는 %d시간 %d분 %d초입니다.\n", n, hour, min, sec);
}

int main(void)
{
	int num;

	printf("초(second) 입력: ");
	scanf("%d", &num);

	Show_H_M_S(num);

	return 0;
}