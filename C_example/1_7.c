#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Number(int n)
{
	int res = 1;

	for (int i = 0; i < n; i++)
	{
		res = res * 2;
	}

	printf("2�� %d������ %d\n", n, res);
}

int main()
{
	int n;

	printf("���� �Է�: ");
	scanf("%d", &n);

	Number(n);

	return 0;
}