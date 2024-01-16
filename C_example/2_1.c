#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LEN 10

void ShowEvenNum(int arr[])
{
	int cnt = 0;

	for (int i = 0; i < LEN; i++)
		if (arr[i] % 2 == 0)
			cnt++;

	printf("짝수 출력: ");
	for (int i = 0; i < LEN; i++)
		if (arr[i] % 2 == 0)
		{
			printf("%d", arr[i]);
			cnt--;
			if (cnt != 0)
				printf(", ");
		}


	printf("\n");
}

void ShowOddNum(int arr[])
{
	int cnt = 0;

	for (int i = 0; i < LEN; i++)
		if (arr[i] % 2 != 0)
			cnt++;

	printf("홀수 출력: ");
	for (int i = 0; i < LEN; i++)
		if (arr[i] % 2 != 0)
		{
			printf("%d", arr[i]);
			cnt--;
			if (cnt != 0)
				printf(", ");
		}

	printf("\n");
}

int main(void)
{
	int arr[LEN];

	printf("총 %d개의 숫자 입력\n", LEN);
	for (int i = 0; i < LEN; i++)
	{
		printf("%d번 입력: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\n");

	ShowOddNum(arr);
	ShowEvenNum(arr);

	return 0;
}