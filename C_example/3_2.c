#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MakeArr(int n);

int main(void)
{
	int n;

	printf("�� �ڸ��� ���� �Է� �� nxn �迭 ����: ");
	scanf("%d", &n);

	MakeArr(n);

	return 0;
}

void MakeArr(int n)
{
	int arr[10][10] = { 0 };


}