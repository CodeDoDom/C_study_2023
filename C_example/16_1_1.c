#include <stdio.h>

int main(void)
{
	int arr[3][9] = { {2,4,6,8,10,12,14,16,18}, {3,6,9,12,15,18,21,24,27}, {4,8,12,16,20,24,28,32,36} };

	for (int i = 0; i < 3; i++)
	{
		printf("[ %d´Ü ]\n", i + 2);

		for (int j = 0; j < 9; j++)
			printf("%d x %d = %d\n", arr[i][0], j + 1, arr[i][j]);

		printf("\n");
	}

	return 0;
}