#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ComplexFuncOne(int** arr1, int* (*arr2)[5])
{
	printf("1\n");
}

void ComplexFuncTwo(int*** arr3, int*** (*arr4)[5])
{
	printf("2\n");
}

int main(void)
{
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);

	return 0;
}