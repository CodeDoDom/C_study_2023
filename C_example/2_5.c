#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void DesSort(int ary[], int len);

int main(void)
{
	int arr[7] = { 0 };
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("ют╥б: ");
		scanf("%d", &arr[i]);
	}

	DesSort(arr, sizeof(arr)/sizeof(int));

	return 0;
}

void DesSort(int ary[], int len)
{
	int i, j;
	int temp = 0;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - 1 - i; j++)
		{
			if (ary[j] < ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < len; i++)
		printf("%d ", ary[i]);
}