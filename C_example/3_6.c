#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* PlayerTurn();
int* ComputerTurn();

int main(void)
{
	srand((int)time(NULL));

	int strike = 0, ball = 0, cnt = 0;
	int* pcs = ComputerTurn();

	printf("GAME START!\n\n");

	while (strike != 3)
	{
		strike = 0, ball = 0;
		int* players = PlayerTurn();
		cnt++;

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (players[i] == pcs[j] && i == j)
					strike++;

				else if (players[i] == pcs[j] && i != j)
					ball++;
			}
		}
		printf("%d번째 도전 결과: %d strike, %d ball!!\n\n", cnt, strike, ball);
	}

	printf("GAME OVER!\n");

	return 0;
}

int* PlayerTurn()
{
	static int arr[3] = { 0 };

	printf("0 부터 9 까지 3개의 숫자 입력: ");
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);

	return arr;
}

int* ComputerTurn()
{
	static int arr[3] = { 0 };

	for (int i = 0; i < 3; i++)
		arr[i] = rand() % 9;

	return arr;
}