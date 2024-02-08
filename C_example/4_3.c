#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct complexnum
{
	double real;
	double img;
} ComNum;

ComNum Add(ComNum c1, ComNum c2);
ComNum Mul(ComNum c1, ComNum c2);
void ShowRes(ComNum c);

int main(void)
{
	ComNum c1, c2;

	printf("���Ҽ� �Է�1[�Ǽ� ���]: ");
	scanf("%lf %lf", &c1.real, &c1.img);

	printf("���Ҽ� �Է�2[�Ǽ� ���]: ");
	scanf("%lf %lf", &c2.real, &c2.img);

	printf("���� ���] ");
	ShowRes(Add(c1, c2));

	printf("���� ���] ");
	ShowRes(Mul(c1, c2));

	return 0;
}

ComNum Add(ComNum c1, ComNum c2)
{
	ComNum tmp;
	tmp.real = c1.real + c2.real;
	tmp.img = c1.img + c2.img;
	return tmp;
}

ComNum Mul(ComNum c1, ComNum c2)
{
	ComNum tmp;
	tmp.real = (c1.real * c2.real) - (c1.img * c2.img);
	tmp.img = (c1.img * c2.real) + (c1.real * c2.img);
	return tmp;
}

void ShowRes(ComNum c)
{
	printf("�Ǽ�: %f, ���: %f\n", c.real, c.img);
}