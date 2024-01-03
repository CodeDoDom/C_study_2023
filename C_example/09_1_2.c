#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int CelToFah(int cel);

int main()
{
	double cel;

	printf("섭씨 온도 입력(실수형): ");
	scanf("%lf", &cel);

	CelToFah(cel);

	return 0;
}

int CelToFah(int cel)
{
	double fah;

	fah = 1.8 * cel + 32;

	printf("화씨 온도 변환(실수형): ");
	printf("%.1f", fah);
}