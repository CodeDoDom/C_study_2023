#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int tot = 0;

	printf("%d ", *ptr);

	for (int i = 0; i < 5; i++)
		tot += *ptr--;

	printf("%d", tot);

	return 0;
}