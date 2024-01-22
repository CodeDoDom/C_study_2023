#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((int)time(NULL));

	for (int i = 0; i < 2; i++)
		printf("%d번 주사위의 결과: %d\n", i + 1, rand() % 6 + 1);

	return 0;
}