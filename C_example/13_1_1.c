#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MySolution();
void BookSolution();

int main(void)
{
	MySolution();
	printf("\n\n");
	BookSolution();

	return 0;
}

void MySolution()	// 틀렸음
{
	int arr1[5] = { 10,20,30,40,50 };
	int* ptr1 = arr1;

	*ptr1 += 2;	// arr1[0]에만 2를 더함

	for (int i = 0; i < 5; i++)
		printf("%d ", (*ptr1 + i));	// arr1 배열을 전부 출력하는 게 아니라, 배열의 첫번째에 i값을 더한 값을 출력.
	
	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", arr1[i]);	// arr1[0]에만 2를 더했기 때문에 첫 번째 값만 2가 더해져 있음.
}

void BookSolution()
{
	int arr2[5] = { 10,20,30,40,50 };
	int* ptr2 = arr2;

	for (int i = 0; i < 5; i++)
	{
		*ptr2 += 2;
		ptr2++;
	}

	for (int i = 0; i < 5; i++)
		printf("%d ", arr2[i]);
}