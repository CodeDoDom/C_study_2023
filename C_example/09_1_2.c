#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CelToFah(int cel);

int main()
{
	double cel;

	printf("���� �µ� �Է�(�Ǽ���): ");
	scanf("%lf", &cel);

	CelToFah(cel);

	return 0;
}

int CelToFah(int cel)
{
	double fah;

	fah = 1.8 * cel + 32;

	printf("ȭ�� �µ� ��ȯ(�Ǽ���): ");
	printf("%.1f", fah);
}