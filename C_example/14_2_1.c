#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void ShowAllData(const int* arr, int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);

	// �Լ��� �Ű����� ���𿡼� �Ű����� arr�� ������� const ������ �� ������?
	// : �Լ����� ������ ���� arr �ȿ� ����� �迭����� ���� �������� ���ϵ���...?

}

int main(void)
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int arrlen = sizeof(arr) / sizeof(int);

	ShowAllData(ptr, arrlen);

	return 0;
}