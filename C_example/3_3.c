#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("0부터 99 이하의 난수 출력: \n");
	for (int i = 0; i < 5; i++)
		printf("%d\n", rand() % 100);

	return 0;
}