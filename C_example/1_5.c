#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int PrimeNumber();

int main(void)
{
	PrimeNumber();

	return 0;
}

int PrimeNumber()
{
	for (int i = 0; i < 10; i++)
	{
		int num = 3;

		for (int j = 1; j < num; j++)
		{
			for (int k = 1; k < num; k++)
			{
				if (j * k == num)
				{
					printf("%d ¼Ò¼öÀÓ\n", num);

					break;
				}
			}
		}
		num++;
	}
}