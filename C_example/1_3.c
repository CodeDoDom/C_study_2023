#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BigCommonNum();

int main()
{
	BigCommonNum();

	return 0;
}

int BigCommonNum()
{
	int n1, n2;

	printf("�� ���� �Է�: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1; i <= n1; i--)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			printf("%d�� %d�� �ִ������� %d�̴�.\n", n1, n2, i);
			
			break;
		}
	}
}