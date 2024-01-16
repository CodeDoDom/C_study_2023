#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LEN 10

void ShowEvenNum(int arr[])
{
	int cnt = 0;

	for (int i = 0; i < LEN; i++)
		if (arr[i] % 2 == 0)
			cnt++;

	printf("¦�� ���: ");
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

	printf("Ȧ�� ���: ");
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

	printf("�� %d���� ���� �Է�\n", LEN);
	for (int i = 0; i < LEN; i++)
	{
		printf("%d�� �Է�: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\n");

	ShowOddNum(arr);
	ShowEvenNum(arr);

	return 0;
}