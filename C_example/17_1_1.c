#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MaxAndMin(int* arr, int len, int** maxPtr, int** minPtr);

int main(void)
{
	int* maxPtr;
	int* minPtr;
	int arr[5];

	printf("���� 5�� �Է�\n");
	for (int i = 0; i < 5; i++)
	{
		printf("�Է�: ");
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);

	printf("���� ū ��: %d\n���� ���� ��: %d\n", *maxPtr, *minPtr);

	return 0;
}

void MaxAndMin(int* arr, int len, int** maxPtr, int** minPtr)
{
	int* max, * min;

	max = &arr[0];
	min = &arr[0];

	for (int i = 0; i < len; i++)
	{
		if (*max < arr[i])
			max = &arr[i];

		if (*min > arr[i])
			min = &arr[i];
	}

	*maxPtr = max;
	*minPtr = min;
}