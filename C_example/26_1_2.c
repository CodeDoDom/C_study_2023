#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
#define AREA(X) ((X)*(X)*PI)

int main(void)
{
	double r;

	printf("���� ������: ");
	scanf("%lf", &r);

	printf("�������� %.2lf�� ���� ����: %g", r, AREA(r));

	return 0;
}