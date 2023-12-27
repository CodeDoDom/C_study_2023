#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2, num3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d * %d + %d = %d", num1, num2, num3, num1 * num2 + num3);

	return 0;
}