#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];
	int tot = 0, min = 0, max = 0, temp = 0;

	printf("���� 5�� �Է�: ");

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
	printf("�Էµ� ���� �߿��� �ִ��� %d�̴�.\n", arr[4]);
	printf("�Էµ� ���� �߿��� �ּڰ��� %d�̴�.\n", arr[0]);

	for (int i = 0; i < 5; i++)
	{
		tot += arr[i];
	}
	printf("�Էµ� ������ �� ���� %d�̴�.\n", tot);

	return 0;
}