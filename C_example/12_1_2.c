#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MySolution();
int BookSolution();

int main(void)
{
	MySolution();
	BookSolution();

	return 0;
}

int MySolution()
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;

	*ptr1 += 10;
	*ptr2 -= 10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("%d %d\n", *ptr1, *ptr2);
}

int BookSolution()
{
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;
	(*ptr1) += 10;
	(*ptr2) -= 10;

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("%d %d\n", *ptr1, *ptr2);
}