#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 };
	int new_arr[10];
	int num, front = 0, last = 9, temp = 0;

	printf("�� 10�� ���� �Է�\n");
	for (int i = 0; i < 10; i++)
	{
		printf("�Է�: ");
		scanf("%d", &num);
		
		if (num % 2 != 0)	// Ȧ���� �迭�� �պ���
		{
			arr[front] = num;
			front++;
		}

		else	// ¦���� �迭�� �ں���
		{
			arr[last] = num;
			last--;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}