#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];
	int tot = 0;

	printf("���� 5�� �Է�: ");

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	for (int i = 0; i < 5; i++)
	{
		tot += arr[i];
	}

	printf("�迭�� �� ���� %d�̴�.\n", tot);

	return 0;
}