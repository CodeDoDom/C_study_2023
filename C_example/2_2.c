#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void TEMPBinaryNum(int num)
{
	if (num > 0)
	{
		if (num % 2 == 0)
			printf("0 ");
		else
			printf("1 ");
		

		TEMPBinaryNum(num / 2);
	}
}

void BinaryNum(int num)
{
	int arr[50] = { 0 };
	int len = 0;

	while (num > 0)
	{
		arr[len] = num % 2;
		num /= 2;
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
}

int main(void)
{
	int num;

	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	TEMPBinaryNum(num);
	printf("\n");
	BinaryNum(num);

	return 0;
}