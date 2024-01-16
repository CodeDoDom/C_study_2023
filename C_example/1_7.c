#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int SquareNum(int n)
{
	int res = 1;
	int cnt = 0;


	while (1)
	{
		res *= 2;
		if (res > n)
			break;
		cnt++;
	}

	printf("2^%d <= %d\n", cnt, n);
}

int main()
{
	int n;

	printf("정수 입력: ");
	scanf("%d", &n);

	SquareNum(n);

	return 0;
}