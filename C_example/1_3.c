#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int BigCommonNum(int, int);

int main(void)
{
	int num1, num2;

	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);

	BigCommonNum(num1, num2);

	return 0;
}

int BigCommonNum(int n1, int n2)
{
	int sn, bn;

	if (n1 < n2)
	{
		sn = n1;
		bn = n2;
	}
	else if (n1 > n2)
	{
		sn = n2;
		bn = n1;
	}
	else if (n1 == n2)
		printf("%d와 %d의 최대공약수는 %d이다.\n", n1, n2, n1);
	else if (n1 == 1 || n2 == 1)
		printf("%d와 %d의 최대공약수는 %d이다.\n", n1, n2, n1);

	if (bn % sn == 0)
		printf("%d와 %d의 최대공약수는 %d이다.\n", bn, sn, sn);
	else
	{
		for (int i = sn - 1; i < sn; i--)
		{
			if (sn % i == 0 && bn % i == 0)
			{
				printf("%d와 %d의 최대공약수는 %d이다.\n", bn, sn, i);

				break;
			}
		}
	}
}