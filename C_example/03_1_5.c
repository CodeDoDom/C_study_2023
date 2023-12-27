#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n1, n2, n3, res;

	scanf("%d %d %d", &n1, &n2, &n3);

	res = (n1 - n2) * (n2 + n3) * (n3 % n1);

	printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d", n1, n2, n2, n3, n3, n1, res);
}