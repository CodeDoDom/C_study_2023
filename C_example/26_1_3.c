#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(X, Y) ( ((X) > (Y)) ? (X) : (Y) )

int main(void)
{
	int n1, n2;

	printf("두 정수 입력: ");
	scanf("%d %d", &n1, &n2);

	printf("%d와 %d 중 더 큰 수는 %d이다.\n", n1, n2, MAX(n1, n2));

	return 0;
}