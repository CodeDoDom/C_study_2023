#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MULTIPLE(X, Y, Z) ((X)*(Y)*(Z))
#define ADD(X, Y, Z) ((X)+(Y)+(Z))

int main(void)
{
	int n1, n2, n3;

	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	printf("%d x %d x %d = %d\n", n1, n2, n3, MULTIPLE(n1, n2, n3));
	printf("%d + %d + %d = %d\n", n1, n2, n3, ADD(n1, n2, n3));

	return 0;
}