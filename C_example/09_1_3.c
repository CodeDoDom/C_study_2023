#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int FibonacciNumber(int num);

int main()
{
	int num = 0;

	printf("¼ö ÀÔ·Â: ");
	scanf("%d", &num);

	FibonacciNumber(num);

	return 0;
}

int FibonacciNumber(int num)
{
	int n1 = 0, n2 = 1, n3, i;

	if (num == 1)
		printf("%d ", n1);
	else
		printf("%d %d ", n1, n2);

	for (i = 0; i < num - 2; i++)
	{
		n3 = n1 + n2;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}
}