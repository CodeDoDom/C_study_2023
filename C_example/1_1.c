#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	printf("10진수로 출력: %d\n", num);
	printf("16진수로 출력: %X\n", num);

	return 0;
}