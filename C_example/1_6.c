#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Show_H_M_S(int n)
{
	int sec, min, hour, temp;

	sec = n % 60;
	temp = n / 60;
	min = temp % 60;
	hour = temp / 60;

	printf("%d�ʴ� %d�ð� %d�� %d���Դϴ�.\n", n, hour, min, sec);
}

int main(void)
{
	int num;

	printf("��(second) �Է�: ");
	scanf("%d", &num);

	Show_H_M_S(num);

	return 0;
}