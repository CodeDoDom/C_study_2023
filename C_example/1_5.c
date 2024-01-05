#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrimeNumber(int);

int main(void)
{
	int cnt = 0;
	int num = 2;

	while (cnt < 10)
	{
		if (PrimeNumber(num))
		{
			printf("¼Ò¼ö: %d\n", num);
			cnt++;
		}
		num++;
	}

	return 0;
}

int PrimeNumber(int num)
{
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return 0;
	}

	return 1;
}