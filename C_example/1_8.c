// 2�� n���� ���ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareNum(int res, int n)
{
	if (n > 0)
	{
		res *= 2;
		return SquareNum(res, n - 1);
	}
	else
		return res;
}

int main(void)
{
	int n;
	int res = 1;

	printf("���� �Է�: ");
	scanf("%d", &n);

	printf("2^%d <= %d\n", n, SquareNum(res, n));

	return 0;
}