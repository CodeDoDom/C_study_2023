#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int seed, i;
	printf("씨드 값 입력: ");
	scanf("%d", &seed);
	srand(&seed);

	for (i = 0; i < 5; i++)
		printf("정수 출력: %d\n", rand());

	return 0;
}