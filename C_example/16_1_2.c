#include <stdio.h>

int main(void)
{
	int a_arr[2][4] = { {1,2,3,4}, {5,6,7,8} };
	int b_arr[4][2];

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			b_arr[j][i] = a_arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%2d", b_arr[i][j]);
		}
		printf("\n");
	}
};