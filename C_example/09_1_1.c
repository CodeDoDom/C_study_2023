#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int MostBig(int n1, int n2, int n3);
int MostSmall(int n1, int n2, int n3);

int main()
{
	int n1 = 0, n2 = 0, n3 = 0;

	printf("정수 세 개 입력: ");
	scanf("%d %d %d", &n1, &n2, &n3);

	MostBig(n1, n2, n3);
	MostSmall(n1, n2, n3);

	return 0;
}

int MostBig(int n1, int n2, int n3)
{
	if (n1 > n2) {
		if (n1 > n3)
			printf("가장 큰 값: %d\n", n1);

		else
			printf("가장 큰 값: %d\n", n3);
	}

	else {
		if (n2 > n3)
			printf("가장 큰 값: %d\n", n2);

		else
			printf("가장 큰 값: %d\n", n3);
	}
}

int MostSmall(int n1, int n2, int n3)
{
	if (n1 < n2) {
		if (n1 < n3)
			printf("가장 작은 값: %d\n", n1);

		else
			printf("가장 작은 값: %d\n", n3);
	}

	else {
		if (n2 < n3)
			printf("가장 작은 값: %d\n", n2);

		else
			printf("가장 작은 값: %d\n", n3);
	}
}