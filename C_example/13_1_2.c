#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)	// 13_1_1���̶� ���� �ٸ� ����
{
	int arr[5] = { 10,20,30,40,50 };
	int* ptr = arr;

	for (int i = 0; i < 5; i++)
		*(ptr + i) += 2;

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}