#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int* nptr);

int main(void)
{
	int num;

	printf("숫자 입력: ");
	scanf("%d", &num);

	printf("SquareByValue: 입력한 수의 제곱은? %d\n", SquareByValue(num));

	printf("1. main: 입력한 수의 제곱은? %d\n", num);

	SquareByReference(&num);

	printf("2. main: 입력한 수의 제곱은? %d\n", num);

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

	printf("SquareByReference: 입력한 수의 제곱은? %d\n", *nptr);
}