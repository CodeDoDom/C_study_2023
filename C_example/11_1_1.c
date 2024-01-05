#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5];
	int tot = 0;

	printf("정수 5개 입력: ");

	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);

	for (int i = 0; i < 5; i++)
		printf("%d\n", arr[i]);

	for (int i = 0; i < 5; i++)
	{
		tot += arr[i];
	}

	printf("배열의 총 합은 %d이다.\n", tot);

	return 0;
}