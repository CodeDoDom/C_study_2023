#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct complexnum
{
	double n1;
	double n2;
} ComNum;

int main(void)
{
	ComNum* list[2];

	for (int i = 0; i < 2; i++)
	{
		ComNum* num = (ComNum*)malloc(sizeof(ComNum) * 1);

		printf("복소수 입력%d [실수 허수]: ", i + 1);
		scanf("%lf %lf", &(num->n1), &(num->n2));

		list[i] = num;
	}

	printf("복소수의 덧셈\n실수: %lf, 허수: %lf\n", (list[0]->n1) + (list[1]->n1), (list[0]->n2) + (list[1]->n2));
	printf("복소수의 곱셈\n실수: %lf, 허수: %lf\n", (list[0]->n1) * (list[1]->n1) - (list[0]->n2) * (list[1]->n2),
		(list[0]->n2) * (list[1]->n1) + (list[0]->n1) * (list[1]->n2));

	for (int i = 0; i < 2; i++)
		free(list[i]);

	return 0;
}