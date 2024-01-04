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

	printf("두 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	for (int i = n1; i <= n1; i--)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			printf("%d와 %d의 최대공약수는 %d이다.\n", n1, n2, i);
			
			break;
		}
	}
}