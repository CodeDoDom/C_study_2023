#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14
#define AREA(X) ((X)*(X)*PI)

int main(void)
{
	double r;

	printf("원의 반지름: ");
	scanf("%lf", &r);

	printf("반지름이 %.2lf인 원의 넓이: %g", r, AREA(r));

	return 0;
}