#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num = 0;

	printf("10���� ���� �Է�: ");
	scanf("%d", &num);

	printf("10������ ���: %d\n", num);
	printf("16������ ���: %X\n", num);

	return 0;
}