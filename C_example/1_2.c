#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiplication();

int main(void)
{
	Multiplication();

	return 0;
}

int Multiplication()
{
	int n1, n2;
	int t1 = 0, t2 = 0;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	if (n1 < n2)
	{
		t1 = n1;
		t2 = n2;
	}
	else
	{
		t1 = n2;
		t2 = n1;
	}

	for (int i = t1; i <= t2; i++)
	{
		printf("[ %d단 ]\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}