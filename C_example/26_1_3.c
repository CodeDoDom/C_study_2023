#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX(X, Y) ( ((X) > (Y)) ? (X) : (Y) )

int main(void)
{
	int n1, n2;

	printf("�� ���� �Է�: ");
	scanf("%d %d", &n1, &n2);

	printf("%d�� %d �� �� ū ���� %d�̴�.\n", n1, n2, MAX(n1, n2));

	return 0;
}