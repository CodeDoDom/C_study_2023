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

		printf("���Ҽ� �Է�%d [�Ǽ� ���]: ", i + 1);
		scanf("%lf %lf", &(num->n1), &(num->n2));

		list[i] = num;
	}

	printf("���Ҽ��� ����\n�Ǽ�: %lf, ���: %lf\n", (list[0]->n1) + (list[1]->n1), (list[0]->n2) + (list[1]->n2));
	printf("���Ҽ��� ����\n�Ǽ�: %lf, ���: %lf\n", (list[0]->n1) * (list[1]->n1) - (list[0]->n2) * (list[1]->n2),
		(list[0]->n2) * (list[1]->n1) + (list[0]->n1) * (list[1]->n2));

	for (int i = 0; i < 2; i++)
		free(list[i]);

	return 0;
}