#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int MenuSelect();

int main()
{
	MenuSelect();

	return 0;
}

int MenuSelect()
{
	int money = 3500;
	int bread = 0, snack = 0, drink = 0;
	int bread_cost = 500, snack_cost = 700, drink_cost = 400;

	printf("���� ����� �����ϰ� �ִ� �ݾ�: %d��\n", money);

	for (int i = 1; i < 7; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			for (int k = 1; k < 8; k++)
			{
				if (money == bread_cost * i + snack_cost * j + drink_cost * k)
					printf("\n[���� ��� ������]\nũ����: %d��\n�����: %d��\n�ݶ�: %d��\n\n", i, j, k);
			}
		}
	}
}