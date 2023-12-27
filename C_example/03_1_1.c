#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("2°³ÀÇ Á¤¼ö: ");
	scanf_s("%d %d", &num1, &num2);

	printf("»¬¼À: %d - %d = %d\n", num1, num2, num1 - num2);
	printf("°ö¼À: %d * %d = %d\n", num1, num2, num1 * num2);

	return 0;
}