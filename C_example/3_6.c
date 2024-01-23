#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* PlayerTurn();
int* ComputerTurn();

int main(void)
{
	srand((int)time(NULL));

	int* pcs = ComputerTurn();

	while (1)
	{
		int* players = PlayerTurn();


	}

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