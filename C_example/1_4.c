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

	printf("현재 당신이 소유하고 있는 금액: %d원\n", money);

	for (int i = 1; i < 7; i++)
	{
		for (int j = 1; j < 5; j++)
		{
			for (int k = 1; k < 8; k++)
			{
				if (money == bread_cost * i + snack_cost * j + drink_cost * k)
					printf("\n[구매 목록 선택지]\n크림빵: %d개\n새우깡: %d개\n콜라: %d개\n\n", i, j, k);
			}
		}
	}
}