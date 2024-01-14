#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];
	int tot = 0, min = 0, max = 0, temp = 0;

	printf("정수 5개 입력: ");

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5 - 1; i++)
	{
		for (int j = 0; j < 5 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("입력된 정수 중에서 최댓값은 %d이다.\n", arr[4]);
	printf("입력된 정수 중에서 최솟값은 %d이다.\n", arr[0]);

	for (int i = 0; i < 5; i++)
	{
		tot += arr[i];
	}
	printf("입력된 정수의 총 합은 %d이다.\n", tot);

	return 0;
}