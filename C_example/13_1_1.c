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

void MySolution()	// Ʋ����
{
	int arr1[5] = { 10,20,30,40,50 };
	int* ptr1 = arr1;

	*ptr1 += 2;	// arr1[0]���� 2�� ����

	for (int i = 0; i < 5; i++)
		printf("%d ", (*ptr1 + i));	// arr1 �迭�� ���� ����ϴ� �� �ƴ϶�, �迭�� ù��°�� i���� ���� ���� ���.
	
	printf("\n");

	for (int i = 0; i < 5; i++)
		printf("%d ", arr1[i]);	// arr1[0]���� 2�� ���߱� ������ ù ��° ���� 2�� ������ ����.
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