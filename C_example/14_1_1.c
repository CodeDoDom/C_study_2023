#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int* nptr);

int main(void)
{
	int num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	printf("SquareByValue: �Է��� ���� ������? %d\n", SquareByValue(num));

	printf("1. main: �Է��� ���� ������? %d\n", num);

	SquareByReference(&num);

	printf("2. main: �Է��� ���� ������? %d\n", num);

	return 0;
}

int SquareByValue(int n)
{
	return n * n;

}

void SquareByReference(int* nptr)
{
	int num = *nptr;

	*nptr = num * num;

	printf("SquareByReference: �Է��� ���� ������? %d\n", *nptr);
}