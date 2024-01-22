#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Rotate(int (*arr1)[4]);

int main(void)
{
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };

	for (int k = 0; k < 4; k++)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
				printf("%4d ", arr[i][j]);

			printf("\n\n");
		}

		printf("\n");
		Rotate(arr);
	}

	return 0;
}

int Rotate(int (*arr1)[4])
{
	int arr2[4][4] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			arr2[i][j] = arr1[i][j];
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			arr1[j][3 - i] = arr2[i][j];
	}
}